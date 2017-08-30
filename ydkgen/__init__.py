#  ----------------------------------------------------------------
# Copyright 2016 Cisco Systems
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ------------------------------------------------------------------
"""
Generate YDK core library, bundle packages.
"""
from __future__ import print_function
from distutils import dir_util
from subprocess import call

import fileinput
import glob
import json
import logging
import os, sys, shutil
import tarfile
import tempfile

from .common import YdkGenException, iscppkeyword, ispythonkeyword
from ydkgen.builder import (ApiModelBuilder, GroupingClassApiModelBuilder,
                            PyangModelBuilder, SubModuleBuilder)
from .resolver import bundle_resolver, bundle_translator
from ydkgen.printer import printer_factory


logger = logging.getLogger('ydkgen')
logger.addHandler(logging.NullHandler())

classes_per_source_file = 350
YDK_YANG_MODEL = 'ydk@2016-02-26.yang'


class YdkGenerator(object):
    """ YdkGenerator class, based in the output_directory using the supplied
        profile description file.

        Attributes:
            output_dir (str): The output directory for generated APIs.
            ydk_root   (str): The ydk root directory. Relative file names in
                              the profile file are resolved relative to this.
            groupings_as_class (bool): If set to true, YANG grouping is
                                       converted to a class.
            language (str): Language for generated APIs
            package_type (str): Package type for generated APIs.
                            Valid options for bundle approach are: 'core',
                                                                   'packages'.
            sort_clazz (bool): Option to sort generated classes at same leve.

        Raises:
            YdkGenException: If an error has occurred
    """

    def __init__(self, output_dir, ydk_root, groupings_as_class, generate_tests, language, package_type, sort_clazz=False):

        _check_generator_args(output_dir, ydk_root, language, package_type)

        self.output_dir = output_dir
        self.ydk_root = ydk_root
        self.groupings_as_class = groupings_as_class
        self.language = language
        self.package_type = package_type
        self.generate_tests = generate_tests
        self.sort_clazz = sort_clazz
        if self.language == 'cpp':
            self.iskeyword = iscppkeyword
        else:
            self.iskeyword = ispythonkeyword

    def generate(self, description_file):
        """ Generate ydk bundle packages or ydk core library.

        Args:
            description_file (str): Path to description file.

        Returns:
            Generated APIs root directory for core and profile package.
            List of Generated APIs root directories for bundle packages.
        """
        if self.package_type == 'bundle':
            return self._generate_bundle(description_file)
        elif self.package_type == 'core':
            return self._generate_core()
        else:
            raise YdkGenException('Invalid package type specified: %s' % self.package_type)

    def _generate_bundle(self, profile_file):
        """ Generate ydk bundle package. First translate profile file to
        bundle syntax.

        Args:
            profile_file (str): Path to profile description file.

        Returns:
            gen_api_root (str): Root directory for generated APIs.
        """
        _check_description_file(profile_file)
        tmp_file = tempfile.mkstemp(suffix='.bundle')[-1]
        bundle_translator.translate(profile_file, tmp_file, self.ydk_root)

        resolver = bundle_resolver.Resolver(self.output_dir, self.ydk_root, self.iskeyword)
        curr_bundle, all_bundles = resolver.resolve(tmp_file)
        assert isinstance(curr_bundle, bundle_resolver.Bundle)
        for x in all_bundles:
            assert isinstance(x, bundle_resolver.Bundle)

        packages = self._get_packages(curr_bundle.resolved_models_dir)
        if len(packages) == 0:
            raise YdkGenException('No YANG models were found. Please check your JSON profile file to make sure it is valid')

        _set_original_bundle_name_for_packages(all_bundles, packages, curr_bundle)
        gen_api_root = self._init_bundle_directories(packages=packages, bundle=curr_bundle)

        yang_models = _create_models_archive(curr_bundle, gen_api_root)

        generated_files = self._print_packages(packages, gen_api_root, curr_bundle)

        if self.language == 'cpp':
            _modify_cpp_cmake(gen_api_root, curr_bundle.name, curr_bundle.str_version, 
                    curr_bundle.str_core_version, generated_files[0], generated_files[1], yang_models)

        os.remove(tmp_file)

        return gen_api_root

    def _generate_core(self):
        """ Generate ydk core package.
            Copy core library sdk template to generated APIs root directory.

        Returns:
            gen_api_root (str): Root directory for generated APIs.
        """
        gen_api_root = self._initialize_gen_api_directories(package_name='ydk', package_type='core')

        return gen_api_root

    def _get_packages(self, resolved_model_dir):
        """ Return packages for resolved YANG modules. Each module will be
            represented as an api package.

        Args:
            resolved_model_dir (str): Path to resolved YANG modules.

        Returns:
            packages (List[.api_model.Package]): List of api packages.
        """

        pyang_builder = PyangModelBuilder(resolved_model_dir)
        modules = pyang_builder.parse_and_return_modules()

        # build api model packages
        if not self.groupings_as_class:
            packages = ApiModelBuilder(self.iskeyword, self.language).generate(modules)
        else:
            packages = GroupingClassApiModelBuilder(self.iskeyword, self.language).generate(modules)
        packages.extend(
            SubModuleBuilder().generate(pyang_builder.get_submodules(), self.iskeyword))

        return packages

    def _print_packages(self, pkgs, output_dir, bundle):
        """ Emit generated APIs.

        Args:
            pkgs (List[.api_model.Package]): List of api packages to print.
            package_name (str): Package name for generated APIs.
                            For example 'ydk_bgp', 'ydk_ietf'.
        """
        global classes_per_source_file
        factory = printer_factory.PrinterFactory()
        bundle_packages = _filter_bundle_from_packages(pkgs, bundle)
        ydk_printer = factory.get_printer(self.language)(output_dir, bundle, self.generate_tests, self.sort_clazz)
        generated_files = ydk_printer.emit(bundle_packages, classes_per_source_file)
        return generated_files

    # Initialize generated API directory ######################################
    def _initialize_gen_api_directories(self, package_name, package_type):
        """ Initialize and return generated APIs root directory.
            If package_name is specified, the gen_api_root is:
                <self.output_dir>/<self.language>/<package_name>
            otherwise, the gen_api_root is:
                <self.output_dir>/<self.language>

            Args:
                package_name (str): Package name for generated API, if specified.
                package_type (str): Sdk template type to copied from, if specified.
                                Valid options are: core, packages.
        """
        gen_api_root = os.path.join(self.output_dir, self.language)
        if package_name:
            gen_api_root = os.path.join(gen_api_root, package_name)

        # clean up gen_api_root
        if not os.path.isdir(gen_api_root):
            os.makedirs(gen_api_root)

        self._copy_sdk_template(gen_api_root, package_type)

        return gen_api_root

    def _init_bundle_directories(self, packages, bundle):
        """ Initialize generated API directory for bundle approach.

        Args:
            bundle (bundle_resolver.Bundle): Bundle instance.

        Returns:
            gen_api_root (str): Root directory for generated APIs.
        """
        gen_api_root = self._initialize_gen_api_directories(bundle.name + '-bundle', 'packages')

        if self.language == 'python':
            _modify_python_setup(gen_api_root,
                                 'ydk-models-%s' % bundle.name,
                                 bundle.str_version,
                                 bundle.str_core_version,
                                 bundle.dependencies,
                                 bundle.description,
                                 bundle.long_description)
            _modify_python_manifest(gen_api_root, bundle.name)

        # write init file for bundle models directory.
        bundle_model_dir = os.path.join(gen_api_root, 'ydk')
        os.mkdir(bundle_model_dir)

        return gen_api_root

    def _copy_sdk_template(self, gen_api_root, package_type):
        """ Copy sdk template to gen_api_root directory.

        Args:
            gen_api_root (str): Root directory for generated APIs.
            package_type (str): Sdk template to copied from.
                            Valid options are: core, packages.
        """
        target_dir = os.path.join(self.ydk_root, 'sdk', self.language)
        if self.language == 'python':
            target_dir = os.path.join(target_dir, package_type)
        elif self.language == 'cpp':
            if package_type == 'packages':
                target_dir = os.path.join(target_dir, package_type)
            elif package_type == 'core':
                target_dir = os.path.join(target_dir, 'core')
        shutil.rmtree(gen_api_root)
        logger.debug('Copying %s to %s' % (target_dir, gen_api_root))
        dir_util.copy_tree(target_dir, gen_api_root)


def _filter_bundle_from_packages(pkgs, bundle):
    bundle_packages = []
    bundle_package_names = [x.name for x in bundle.models]
    for package in pkgs:
        if package.stmt.arg in bundle_package_names:
            bundle_packages.append(package)
    return bundle_packages


def _get_yang_models_filenames_from_directory(path, prefix):
    yang_models = []
    for file in os.listdir(path):
        file_path = os.path.join(path, file)
        if file.endswith(".yang"):
            yang_models.append(os.path.join(prefix, file))
        elif os.path.islink(file_path):
            yang_models.extend(_get_yang_models_filenames_from_directory(file_path, file))
    return yang_models


def _create_tar(resolved_models_dir, tar_file_path):
    yang_models = _get_yang_models_filenames_from_directory(resolved_models_dir, '')
    with tarfile.open(tar_file_path, 'w:gz') as tar:
        for y in yang_models:
            yang_model_path = os.path.join(resolved_models_dir, y)
            tar.add(yang_model_path, arcname=os.path.basename(yang_model_path))
    yang_models_base_names = [os.path.basename(file) for file in yang_models]
    return yang_models_base_names


def _create_models_archive(bundle, target_dir):
    '''
    Creates yang models archive as part of bundle package.
    Args:
        source_dir (str): Directory where models are located
        bundle_qualified_name (st): Bundle name with version
        target_dir (str): Directory where archive is to be created
    '''
    global YDK_YANG_MODEL
    assert isinstance(bundle, bundle_resolver.Bundle)
    tar_file = '{}.tar.gz'.format(bundle.fqn)
    tar_file_path = os.path.join(target_dir, tar_file)
    ydk_yang = os.path.join(target_dir, YDK_YANG_MODEL)
    if os.path.isfile(ydk_yang):
        shutil.copy(ydk_yang, bundle.resolved_models_dir)
    yang_models = _create_tar(bundle.resolved_models_dir, tar_file_path)

    logger.debug('\nCreated models archive: {}'.format(tar_file_path))
    return yang_models


def _set_original_bundle_name_for_packages(bundles, packages, curr_bundle):
    """ Set original bundle name for packages.

    Args:
        bundles (List[.resolver.bundle_resolver.Bundle]): Bundle instance.
        packages (List[.api_model.Package]): List of api packages.

    """
    # add API for model being augmented to bundle
    for pkg in packages:
        pkg.curr_bundle_name = curr_bundle.name
        for bundle in bundles:
            for module in bundle.models:
                if pkg.name == module.pkg_name:
                    pkg.bundle_name = bundle.name


def _modify_python_setup(gen_api_root, package_name, version, core_version, dependencies, description, long_description):
    """ Modify setup.py template for python packages. Replace package name
        and version number in setup.py located in <gen_api_root>/setup.py.
        If dependencies are specified, $DEPENDENCY$ in setup.py will be replaced.
        The ``fileinput`` module redirect stdout back to input file.

    Args:
        gen_api_root (str): Root directory for generated APIs.
        package_name (str): Package name for generated APIs.
        version (str): Package version for generated APIs.
        core_version (str): YDK core library version for generated APIs.
        dependencies (list): bundle dependencies
        description (str): description for bundle package
        long_description (str): long description for bundle package
    """
    setup_file = os.path.join(gen_api_root, 'setup.py')
    replaced_package = False
    replaced_version = False
    replaced_core_version = False
    replaced_dependencies = False
    replaced_description = False
    replaced_long_description = False
    for line in fileinput.input(setup_file, inplace=True):
        if not replaced_package and "$PACKAGE$" in line:
            replaced_package = True
            print(line.replace("$PACKAGE$", package_name.replace('_', '-')), end='')
        elif not replaced_version and "$VERSION$" in line:
            replaced_version = True
            print(line.replace("$VERSION$", version), end='')
        elif not replaced_core_version and "$CORE_VERSION$" in line:
            replaced_core_version = True
            print(line.replace("$CORE_VERSION$", core_version), end='')
        elif not replaced_dependencies and "$DEPENDENCY$" in line:
            replaced_dependencies = True
            if dependencies:
                additional_requires = ["'ydk-models-%s>=%s'" % (d.name, d.str_version)
                                       for d in dependencies]
                print(line.replace("'$DEPENDENCY$'", ", ".join(additional_requires)))
            else:
                print(line.replace("'$DEPENDENCY$'", ""))
        elif not replaced_description and "$DESCRIPTION$" in line:
            replaced_description = True
            print(line.replace("$DESCRIPTION$", description), end='')
        elif not replaced_long_description and "$LONG_DESCRIPTION$" in line:
            replaced_long_description = True
            print(line.replace("$LONG_DESCRIPTION$", long_description), end='')
        else:
            print(line, end='')


def _modify_python_manifest(gen_api_root, bundle_name):
    manifest_file = os.path.join(gen_api_root, 'MANIFEST.in')
    for line in fileinput.input(manifest_file, inplace=True):
        if '$NAME$' in line:
            print(line.replace('$NAME$', bundle_name))
        else:
            print(line, end='')


def _modify_cpp_cmake(gen_api_root, bundle_name, version, core_version, source_files, header_files, model_names):
    """ Modify CMakeLists.txt template for cpp libraries.

    Args:
        gen_api_root (str): Root directory for generated APIs.
        bundle_name (str): Package name for generated APIs.
        version (str): Package version for generated APIs.
        core_version (str): YDK core library version for generated APIs.
    """
    cmake_file = os.path.join(gen_api_root, 'CMakeLists.txt')

    source_files = ['ydk/models/{}/'.format(bundle_name) + s for s in source_files]
    header_files = ['ydk/models/{}/'.format(bundle_name) + s for s in header_files]
    source_file_names = ' '.join(source_files)
    header_file_names = ' '.join(header_files)
    model_file_names = ' '.join(model_names)

    for line in fileinput.input(cmake_file, inplace=True):
        if "@BRIEF_NAME@" in line:
            line = line.replace("@BRIEF_NAME@", bundle_name)
            if "@SOURCE_FILES@" in line:
                line = line.replace("@SOURCE_FILES@", source_file_names)
            elif "@HEADER_FILES@" in line:
                line = line.replace("@HEADER_FILES@", header_file_names)
            elif "@VERSION@" in line:
                line = line.replace("@VERSION@", version)
            elif "@CORE_VERSION@" in line:
                line = line.replace("@CORE_VERSION@", core_version)
            elif "@YANG_FILES@" in line:
                line = line.replace("@YANG_FILES@", model_file_names)
            print(line, end='')
        elif "@BRIEF_NAME_WITH_DASHES@" in line:
            line = line.replace("@BRIEF_NAME_WITH_DASHES@", bundle_name.replace('_', '-'))
            print(line, end='')
        else:
            print(line, end='')


# Generator checks #####################################################
def _check_generator_args(output_dir, ydk_root, language, package_type):
    """ Check generator arguments.

    Args:
        output_dir (str): The output directory for generated APIs.
        ydk_root (str): The ydk root directory.
        language (str): Language for generated APIs.
        package_type (str): Package type for generated APIs.
                        Valid options for bundle approach are: 'core',
                                                               'packages'.
    Raises:
        YdkGenException: If invalid arguments are passed in.
    """
    if language != 'cpp' and language != 'python':
        raise YdkGenException('Language {0} not supported'.format(language))

    if output_dir is None or len(output_dir) == 0:
        logger.error('output_directory is None.')
        raise YdkGenException('output_dir cannot be None.')

    if ydk_root is None or len(ydk_root) == 0:
        logger.error('ydk_root is None.')
        raise YdkGenException('YDKGEN_HOME is not set.')


def _check_description_file(description_file):
    """ Check if description_file is valid path to file.

    Args:
        description_file (str): Path to description file.

    Raises:
        YdkGenException: If path to description file is not valid.
    """
    if not os.path.isfile(description_file):
        logger.error('Path to description file is not valid.')
        raise YdkGenException('Path to description file is not valid.')
