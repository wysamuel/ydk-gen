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

""" py_types.py

    Contains python-cpp glue code for:
        - YList
        - YLeafList
        - Entity
"""
from ydk.ext.types import ChildrenMap
from ydk.ext.types import Enum as _Enum
from ydk.ext.types import YLeaf as _YLeaf
from ydk.ext.types import YLeafList as _YLeafList
from ydk.ext.types import Entity as _Entity
from ydk.ext.types import LeafDataList
from ydk.filters import YFilter as _YFilter
from ydk.errors import YPYModelError as _YPYModelError
from ydk.errors.error_handler import handle_type_error as _handle_type_error


class YList(list):
    """ Represents a list with support for hanging a parent

        All YANG based entity classes that have lists in them use YList
        to represent the list.

        The "list" statement is used to define an interior data node in the
        schema tree.  A list node may exist in multiple instances in the data
        tree.  Each such instance is known as a list entry.  The "list"
        statement takes one argument, which is an identifier, followed by a
        block of substatements that holds detailed list information.

        A list entry is uniquely identified by the values of the list's keys,
        if defined.
    """
    def __init__(self, parent):
        super(YList, self).__init__()
        self.parent = parent

    def __setattr__(self, name, value):
        if name == 'yfilter' and isinstance(value, _YFilter):
            for e in self:
                e.yfilter = value
        else:
            super(YList, self).__setattr__(name, value)

    def append(self, item):
        item.parent = self.parent
        super(YList, self).append(item)

    def extend(self, items):
       for item in items:
           self.append(item)


class YLeafList(_YLeafList):
    """ Wrapper class for YLeafList, add __repr__ and get list slice
    functionalities.
    """
    def __init__(self, ytype, leaf_name):
        super(YLeafList, self).__init__(ytype, leaf_name)
        self.ytype = ytype
        self.leaf_name = leaf_name

    def append(self, item):
        if isinstance(item, _YLeaf):
            item = item.get()
        super(YLeafList, self).append(item)

    def extend(self, items):
        for item in items:
            self.append(item)

    def set(self, other):
        if not isinstance(other, YLeafList):
            raise _YPYModelError("Invalid value '{}' in '{}'"
                            .format(other, self.leaf_name))
        else:
            super(YLeafList, self).clear()
            for item in other:
                self.append(item)

    def __getitem__(self, arg):
        if isinstance(arg, slice):
            indices = arg.indices(len(self))
            ret = YLeafList(self.ytype, self.leaf_name)
            values = [self.__getitem__(i).get() for i in range(*indices)]
            ret.extend(values)
            return ret
        else:
            arg = len(self) + arg if arg < 0 else arg
            return super(YLeafList, self).__getitem__(arg)

    def __str__(self):
        rep = [i for i in self.getYLeafs()]
        return "%s('%s', %r)" % (self.__class__.__name__, self.leaf_name, rep)


class Entity(_Entity):
    """ Entity wrapper class overrides get_children method.
    """
    def __init__(self):
        super(Entity, self).__init__()
        self._local_refs = {}
        self._children_name_map = {}
        self._children_yang_names = set()

    def __eq__(self, other):
        if not isinstance(other, Entity):
            return False
        return super(Entity, self).__eq__(other)

    def __ne__(self, other):
        if not isinstance(other, Entity):
            return True
        return super(Entity, self).__ne__(other)

    def get_children(self):
        children = ChildrenMap()

        for name in self.__dict__:
            value = self.__dict__[name]
            if isinstance(value, Entity) and name != '_top_entity':
                if name not in self._children_name_map:
                    continue
                children[name] = value
            elif isinstance(value, YList):
                for v in value:
                    if isinstance(v, Entity):
                        children[v.get_segment_path()] = v
        self._local_refs["ydk::children"] = children
        return children

    def _get_child_by_seg_name(self, segs):
        for seg in segs:
            for name in self._children_name_map:
                if seg == self._children_name_map[name]:
                    return self.__dict__[name]
            for name in self._local_refs:
                if seg == name.lstrip("ydk::seg::"):
                    return self._local_refs[name]
        return None

    def _check_monkey_patching_error(self, name, value):
        obj = self.__dict__.get(name)
        if obj is None or isinstance(obj, (_YLeaf, YLeafList, YList)):
            return
        if not isinstance(value, obj.__class__):
            raise _YPYModelError("Invalid value '{!s}' in '{}'"
                                 .format(value, obj))

    def _perform_setattr(self, clazz, leaf_names, name, value):
        self._check_monkey_patching_error(name, value)
        with _handle_type_error():
            if name in self.__dict__ and isinstance(self.__dict__[name], YList):
                raise _YPYModelError("Attempt to assign value of '{}' to YList ldata. "
                                    "Please use list append or extend method."
                                    .format(value))
            if isinstance(value, _Enum.YLeaf):
                value = value.name
            if name in leaf_names and name in self.__dict__:
                if isinstance(value, _YLeaf):
                    self.__dict__[name].set(value.get())
                elif isinstance(value, _YLeafList):
                    super(Entity, self).__setattr__(name, value)
                else:
                    self.__dict__[name].set(value)
            else:
                if hasattr(value, "parent") and name != "parent":
                    if hasattr(value, "is_presence_container") and value.is_presence_container:
                        value.parent = self
                    elif value.parent is None and value.yang_name in self._children_yang_names:
                        value.parent = self
                super(Entity, self).__setattr__(name, value)

    def _setup_class(self, obj, leaf_names, leaflist_names, child_names, list_names):
        setattr(obj, '_has_data', self._has_data)
        setattr(obj, '_has_operation', self._has_operation)
        setattr(obj, '_create_leafdata', self._create_leafdata)
        for k,v in leaf_names.items():
            setattr(obj, k[0], v)
        for k,v in leaflist_names.items():
            setattr(obj, k[0], v)

    def _has_data(self, leaf_names, leaf_lists, child_names, list_names):
        for leaf_name in leaf_names:
            if getattr(self, leaf_name).is_set:
                return True

        for leaf_name in leaf_lists:
            leaf_list = getattr(self, leaf_name)
            if leaf_list.is_set:
                return True
            for item in leaf_list.getYLeafs():
                if item.is_set:
                    return True

        for child_name in child_names:
            child = getattr(self, child_name)
            if child is not None and child.has_data():
                return True

        for child_name in list_names:
            child_list = getattr(self, child_name)
            for child in child_list:
                if child is not None and child.has_data():
                    return True
        return False

    def _has_operation(self, self_yfilter, leaf_names, leaf_lists, child_names, list_names):
        for leaf_name in leaf_names:
            if getattr(self, leaf_name).yfilter != YFilter.not_set:
                return True

        for leaf_name in leaf_lists:
            leaf_list = getattr(self, leaf_name)
            if leaf_list.yfilter != YFilter.not_set:
                return True
            for item in leaf_list.getYLeafs():
                if item.yfilter != YFilter.not_set:
                    return True

        for child_name in child_names:
            child = getattr(self, child_name)
            if child is not None and child.has_operation():
                return True

        for child_name in list_names:
            child_list = getattr(self, child_name)
            for child in child_list:
                if child is not None and child.has_operation():
                    return True
        return False

    def _create_leafdata(self, leaf_names, leaflist_names):
        leaf_name_data = LeafDataList()
        for leaf_name in leaf_names:
            leaf = getattr(self, leaf_name)
            if (leaf.is_set or leaf.yfilter != YFilter.not_set):
                leaf_name_data.append(leaf.get_name_leafdata())
        leaf_name_data.extend(self._create_leaflists_leafdata(leaflist_names))
        return leaf_name_data

    def _create_leaflists_leafdata(self, leaflist_names):
        leaf_name_data = LeafDataList()
        for leaf_name in leaflist_names:
            leaf = getattr(self, leaf_name)
            leaf_name_data.extend(leaf.get_name_leafdata())
        return leaf_name_data

'''
    def _set_value(self, value_path, value, name_space, name_space_prefix,
                   leaf_names, leaf_lists, child_names, list_names):
        
        self.ctx.writeln('if(value_path == "%s"):' % (leaf.stmt.arg))
        self.ctx.lvl_inc()
        if(isinstance(leaf.property_type, Bits)):
            if leaf.is_many:
                self.ctx.writeln('bits_value = Bits()')
                self.ctx.writeln('bits_value[value] = True')
                self.ctx.writeln('self.%s.append(bits_value)' % leaf.name)
            else:
                self.ctx.writeln('self.%s[value] = True' % leaf.name)
        elif(leaf.is_many):
            if isinstance(leaf.property_type, Class) and leaf.property_type.is_identity():
                self.ctx.writeln('identity = Identity(name_space, name_space_prefix, value)')
                self.ctx.writeln('self.%s.append(identity)' % leaf.name)
            else:
                self.ctx.writeln('self.%s.append(value)' % leaf.name)
        else:
            self.ctx.writeln('self.%s = value' % leaf.name)
            self.ctx.writeln('self.%s.value_namespace = name_space' % leaf.name)
            self.ctx.writeln('self.%s.value_namespace_prefix = name_space_prefix' % leaf.name)
        self.ctx.lvl_dec()
        '''
