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
 module_printer.py

 YANG model driven API, python emitter.

"""

from ydkgen.api_model import Class, Enum, Bits
from ydkgen.common import convert_to_reStructuredText

from .class_printer import ClassPrinter
from .enum_printer import EnumPrinter
from ydkgen.printer.file_printer import FilePrinter


class ModulePrinter(FilePrinter):

    def __init__(self, ctx, extra_args):
        super(ModulePrinter, self).__init__(ctx)
        self.sort_clazz = extra_args.get('sort_clazz', False)
        self.identity_subclasses = extra_args.get('identity_subclasses', {})
        self.module_namespace_lookup = extra_args.get('module_namespace_lookup', {})

    def print_header(self, package):
        self._print_module_description(package)

        self.ctx.writeln("from ydk.types import Entity, EntityPath, Identity, Enum, YType, YLeaf, YLeafList, YList, LeafDataList, Bits, Empty, Decimal64")
        self.ctx.writeln("from ydk.filters import YFilter")
        self.ctx.writeln("from ydk.errors import YPYError, YPYModelError")
        self.ctx.writeln("from ydk.errors.error_handler import handle_type_error as _handle_type_error")
        self.ctx.bline()
        self.ctx.bline()

    def print_body(self, package):
        self._print_module_enums(package)
        self._print_module_classes(package)
        self.ctx.bline()

    def _print_module_description(self, package):
        comment = package.stmt.search_one('description')
        self.ctx.writeln('""" %s ' % package.name)
        self.ctx.bline()

        if comment is not None:
            comment = comment.arg
            for line in comment.split('\n'):
                self.ctx.writeln(convert_to_reStructuredText(line))
        self.ctx.bline()
        self.ctx.writeln('"""')

    def _print_module_enums(self, package):
        enumz = []
        enumz.extend(
            [element for element in package.owned_elements if isinstance(element, Enum)])
        for nested_enumz in sorted(enumz, key=lambda element: element.name):
            self._print_enum(nested_enumz)

    def _print_module_classes(self, package):
        ClassPrinter(self.ctx, self.sort_clazz, self.module_namespace_lookup).print_output(
            [clazz for clazz in package.owned_elements if isinstance(clazz, Class)])

    def _print_bits(self, bits):
        BitsPrinter(self.ctx).print_bits(bits)

    def _print_enum(self, enum_class):
        EnumPrinter(self.ctx).print_enum(enum_class, False)

