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
source_printer.py

 prints C++ classes

"""
from ydkgen.api_model import Class, Package
from ydkgen.common import snake_case

from .class_constructor_printer import ClassConstructorPrinter
from .class_get_child_printer import ClassGetChildPrinter
from .class_get_entity_path_printer import GetEntityPathPrinter, GetSegmentPathPrinter


class ClassSourcePrinter(object):
    def __init__(self, ctx, bundle_name, module_namespace_lookup):
        self.ctx = ctx
        self.bundle_name = bundle_name
        self.module_namespace_lookup = module_namespace_lookup

    def print_output(self, clazz):
        leafs = []
        children = []
        self._get_class_members(clazz, leafs, children)
        self._print_class_constructor(clazz, leafs, children)
        self._print_class_destructor(clazz)
        self._print_class_method_definitions(clazz, leafs, children)

    def _print_class_constructor(self, clazz, leafs, children):
        ClassConstructorPrinter(self.ctx, self.module_namespace_lookup).print_constructor(clazz, leafs, children)

    def _print_class_destructor(self, clazz):
        self.ctx.writeln(clazz.qualified_cpp_name() + '::~' + clazz.name + '()')
        self.ctx.writeln('{')
        self.ctx.writeln('}')
        self.ctx.bline()

    def _print_class_method_definitions(self, clazz, leafs, children):
        if clazz.is_identity():
            return
        self._print_class_get_segment_path(clazz)
        self._print_class_get_path(clazz, leafs)
        self._print_class_set_child(clazz, children)
        self._print_top_level_entity_functions(clazz, leafs)

    def _print_top_level_entity_functions(self, clazz, leafs):
        if clazz.owner is not None and isinstance(clazz.owner, Package):
            self._print_clone_ptr_function(clazz)
            self._print_yang_models_function(clazz)
            self._print_bundle_name_function(clazz)
            self._print_capabilities_lookup_function(clazz)
            self._print_namespace_identity_lookup_function(clazz)

    def _print_clone_ptr_function(self, clazz):
        self.ctx.writeln('std::shared_ptr<Entity> %s::clone_ptr() const' % clazz.qualified_cpp_name())
        self.ctx.writeln('{')
        self.ctx.lvl_inc()
        self.ctx.writeln('return std::make_shared<%s>();' % clazz.qualified_cpp_name())
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

    def _print_yang_models_function(self, clazz):
        self.ctx.writeln('std::string %s::get_bundle_yang_models_location() const' % clazz.qualified_cpp_name())
        self.ctx.writeln('{')
        self.ctx.lvl_inc()
        self.ctx.writeln('return ydk_%s_models_path;' % snake_case(self.bundle_name))
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

    def _print_bundle_name_function(self, clazz):
        self.ctx.writeln('std::string %s::get_bundle_name() const' % clazz.qualified_cpp_name())
        self.ctx.writeln('{')
        self.ctx.lvl_inc()
        self.ctx.writeln('return "%s";' % snake_case(self.bundle_name))
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

    def _print_capabilities_lookup_function(self, clazz):
        self.ctx.writeln('augment_capabilities_function %s::get_augment_capabilities_function() const' % clazz.qualified_cpp_name())
        self.ctx.writeln('{')
        self.ctx.lvl_inc()
        self.ctx.writeln("return %s_augment_lookup_tables;" % snake_case(self.bundle_name))
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

    def _print_namespace_identity_lookup_function(self, clazz):
        self.ctx.writeln('std::map<std::pair<std::string, std::string>, std::string> %s::get_namespace_identity_lookup() const' % clazz.qualified_cpp_name())
        self.ctx.writeln('{')
        self.ctx.lvl_inc()
        self.ctx.writeln("return %s_namespace_identity_lookup;" % snake_case(self.bundle_name))
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

    def _get_class_members(self, clazz, leafs, children):
        for prop in clazz.properties():
            ptype = prop.property_type
            if isinstance(ptype, Class) and not ptype.is_identity():
                children.append(prop)
            elif ptype is not None:
                leafs.append(prop)

    def _print_class_get_segment_path(self, clazz):
        GetSegmentPathPrinter(self.ctx).print_output(clazz)

    def _print_class_get_path(self, clazz, leafs):
        GetEntityPathPrinter(self.ctx).print_output(clazz, leafs)

    def _print_class_set_child(self, clazz, children):
        ClassGetChildPrinter(self.ctx).print_class_get_child(clazz, children)
