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
class_inits_printer.py

 __init__ printer

"""
from pyang.types import PathTypeSpec
from ydkgen.api_model import Bits, Class, Package, DataType, Enum
from ydkgen.common import get_module_name, get_type_name, get_leafs_children_python


def get_leafs(clazz):
    leafs = []
    for child in clazz.owned_elements:
        if child.stmt.keyword in ('leaf', 'anyxml'):
            leafs.append(child)
    return leafs


def get_leaf_lists(clazz):
    leaf_lists = []
    for child in clazz.owned_elements:
        if child.stmt.keyword == 'leaf-list':
            leaf_lists.append(child)
    return leaf_lists


def get_lists(clazz):
    lists = []
    for child in clazz.owned_elements:
        if child.stmt.keyword == 'list':
            lists.append(child)
    return lists


class ClassInitsPrinter(object):

    def __init__(self, ctx, module_namespace_lookup):
        self.ctx = ctx
        self.module_namespace_lookup = module_namespace_lookup

    def print_output(self, clazz, leafs, children):
        self._print_class_inits_header(clazz)
        self._print_class_inits_body(clazz, leafs, children)
        self._print_class_inits_trailer(clazz)

    def _print_class_inits_header(self, clazz):
        self.ctx.writeln('def __init__(self):')
        self.ctx.lvl_inc()

    def _print_class_inits_body(self, clazz, leafs, children):
        if clazz.is_identity():
            module_name = get_module_name(clazz.stmt)
            namespace = self.module_namespace_lookup[module_name]
            line = 'super(%s, self).__init__("%s", "%s", "%s:%s")' % (clazz.name, namespace, module_name, module_name, clazz.stmt.arg)
            self.ctx.writeln(line)
        else:
            #self.ctx.writeln('super(%s, self).__init__()' % clazz.qn())
            if clazz.owner is not None and isinstance(clazz.owner, Package):
                self.ctx.writeln('self._top_entity = None')
            self.ctx.bline()
            self.ctx.writeln('self.yang_name = "%s"' % clazz.stmt.arg)
            self.ctx.writeln('self.yang_parent_name = "%s"' % clazz.owner.stmt.arg)
            if clazz.stmt.search_one('presence') is not None:
                self.ctx.writeln('self.is_presence_container = True')
            self._print_init_leafs_and_leaflists(clazz, leafs)
            self._print_init_children(children)
            self._print_init_lists(clazz)
            self.ctx.bline()
            args = get_leafs_children_python(clazz, leafs, children)
            self.ctx.writeln('super(%s, self).__init__('%(clazz.name))
            self.ctx.lvl_inc()
            self.ctx.writeln('%s,' % args[0])
            self.ctx.writeln('%s,' % args[1])
            self.ctx.writeln('%s,' % args[2])
            self.ctx.writeln('%s)' % args[3])
            self.ctx.lvl_dec()

    def _print_init_leafs_and_leaflists(self, clazz, leafs):
        yleafs = get_leafs(clazz)
        yleaf_lists = get_leaf_lists(clazz)

        for prop in leafs:
            leaf_type = None
            if prop in yleafs:
                leaf_type = 'YLeaf'
            elif prop in yleaf_lists:
                leaf_type = 'YLeafList'

            self.ctx.bline()
            if all((prop.stmt.top.arg != clazz.stmt.top.arg,
                    hasattr(prop.stmt.top, 'i_aug_targets') and
                    clazz.stmt.top in prop.stmt.top.i_aug_targets)):
                name = ':'.join([prop.stmt.top.arg, prop.stmt.arg])
            else:
                name = prop.stmt.arg

            self.ctx.writeln('self.%s = %s(YType.%s, "%s")'
                % (prop.name, leaf_type, get_type_name(prop.property_type), name))

    def _print_init_children(self, children):
        for child in children:
            if not child.is_many:
                self.ctx.bline()
                if (child.stmt.search_one('presence') is None):
                    self.ctx.writeln('self.%s = %s()' % (child.name, child.property_type.qn()))
                    self.ctx.writeln('self.%s.parent = self' % child.name)
                else:
                    self.ctx.writeln('self.%s = None' % (child.name))
                self.ctx.writeln('self._children_name_map["%s"] = "%s"' % (child.name, child.stmt.arg))
                self.ctx.writeln('self._children_yang_names.add("%s")' % (child.stmt.arg))

    def _print_init_lists(self, clazz):
        if clazz.is_identity() and len(clazz.extends) == 0:
            return

        output = []
        for prop in clazz.properties():
            if (prop.is_many and
                isinstance(prop.property_type, Class) and
                not prop.property_type.is_identity()):
                output.append('self.%s = YList(self)' % prop.name)
        if len(output) > 0:
            self.ctx.bline()
            self.ctx.writelns(output)
            self.ctx.bline()

    def _print_class_inits_trailer(self, clazz):
        self.ctx.lvl_dec()
        self.ctx.bline()

class ClassSetAttrPrinter(object):

    def __init__(self, ctx):
        self.ctx = ctx

    def print_setattr(self, clazz, leafs):
        yleafs = get_leafs(clazz)
        yleaf_lists = get_leaf_lists(clazz)
        ylists = get_lists(clazz)

        if len(yleafs) + len(yleaf_lists) + len(ylists)> 0:
            self._print_class_setattr_header()
            self._print_class_setattr_body(clazz, leafs)
            self._print_class_setattr_trailer()

    def _print_class_setattr_header(self):
        self.ctx.writeln('def __setattr__(self, name, value):')
        self.ctx.lvl_inc()

    def _print_class_setattr_body(self, clazz, leafs):
        leaf_names = ['%s' % (leaf.name) for leaf in leafs]
        self.ctx.writeln('self._perform_setattr(%s, %s, name, value)'%(clazz.qn(), leaf_names))

    def _print_class_setattr_trailer(self):
        self.ctx.lvl_dec()
        self.ctx.bline()
