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

prints python classes

"""
from ydkgen.api_model import Bits, Class


class ClassSetYLeafPrinter(object):
    def __init__(self, ctx):
        self.ctx = ctx

    def print_class_set_value(self, clazz, leafs):
        self._print_class_set_value_header(clazz)
        self._print_class_set_value_body(leafs)
        self._print_class_set_value_trailer(clazz)

    def _print_class_set_value_header(self, clazz):
        self.ctx.writeln('def set_value(self, value_path, value, name_space, name_space_prefix):')

    def _print_class_set_value_body(self, leafs):
        self.ctx.lvl_inc()

        if len(leafs) == 0:
            self.ctx.writeln('pass')
        else:
            self.ctx.writeln(
                'return self._set_value(self, value_path, value, name_space, name_space_prefix, self.leaf_names, self.leaflist_names, self.child_names, self.list_names)')

        self.ctx.lvl_dec()

    def _print_class_set_value_trailer(self, clazz):
        self.ctx.bline()

