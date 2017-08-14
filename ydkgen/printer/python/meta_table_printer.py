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
meta_table_printer.py

 YANG model driven API, class emitter.

"""
from ydkgen.api_model import Class, Package, Enum


class MetaTablePrinter(object):

    def __init__(self, ctx):
        self.ctx = ctx

    def print_table(self, package):
        self.ctx.bline()
        self.ctx.bline()
        self.ctx.writeln('_meta_table = {')
        self.ctx.lvl_inc()
        self._print_meta_entries([clazz for clazz in package.owned_elements if isinstance(clazz, Class)])
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

    def _print_meta_entries(self, classes):
        for clazz in classes:
            self._print_meta_entry(clazz)

    def _print_meta_entry(self, clazz):
        self.ctx.writeln("'%s' : %s()"  % (clazz.qn(), clazz.qn()))
        self._print_meta_entries([clazz for clazz in clazz.owned_elements if isinstance(clazz, Class)])