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

from __future__ import absolute_import
import ydk.types as ytypes
import unittest

from ydk.services import CRUDService
from ydk.models.ydktest import ydktest_sanity as ysanity
from ydk.models.ydktest import ydktest_sanity_types as ysanity_types
from ydk.models.ydktest import ydktest_types as y_types
from ydk.providers import NetconfServiceProvider, NativeNetconfServiceProvider
from ydk.types import Empty, DELETE, Decimal64
from compare import is_equal
from ydk.errors import YPYError, YPYModelError

from ydk.models.ydktest_sanity import YdkEnumTestEnum, YdkEnumIntTestEnum


class SanityTest(unittest.TestCase):
    PROVIDER_TYPE = "non-native"

    @classmethod
    def setUpClass(self):
        if SanityTest.PROVIDER_TYPE == "native":
            self.ncc = NativeNetconfServiceProvider(address='127.0.0.1',
                                                    username='admin',
                                                    password='admin',
                                                    protocol='ssh',
                                                    port=12022)
        else:
            self.ncc = NetconfServiceProvider(address='127.0.0.1',
                                              username='admin',
                                              password='admin',
                                              protocol='ssh',
                                              port=12022)
        self.crud = CRUDService()

    @classmethod
    def tearDownClass(self):
        self.ncc.close()

    def setUp(self):
        runner = ysanity.Runner()
        self.crud.delete(self.ncc, runner)

    def tearDown(self):
        runner = ysanity.Runner()
        self.crud.delete(self.ncc, runner)

    def _create_runner(self):
        runner = ysanity.Runner()
        runner.ytypes = runner.Ytypes()
        runner.ytypes.built_in_t = runner.ytypes.BuiltInT()

        return runner

    def test_int8(self):
        # Create Runner
        runner = self._create_runner()
        runner.ytypes.built_in_t.number8 = 0
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_int16(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.number16 = 126
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_int32(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.number32 = 200000
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_bits(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.bits_value['disable-nagle'] = True
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_int64(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.number64 = -9223372036854775808
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_uint8(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.u_number8 = 0
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_uint16(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.u_number16 = 65535
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_uint32(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.u_number32 = 5927
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_uint64(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.u_number64 = 18446744073709551615
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_decimal64(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.deci64 = Decimal64('3.14')
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_string_1(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.name = 'name_str'
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_string_2(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.name = b'name_str'
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        runner.ytypes.built_in_t.name = 'name_str'
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_empty(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.emptee = Empty()
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

        # explicit DELETE not support at the moment
        # runner1.ytypes.built_in_t.emptee = DELETE()
        # self.crud.update(self.ncc, runner1)

        # runner2 = self.crud.read(self.ncc, self._create_runner())

        # self.assertEqual(runner2.ytypes.built_in_t.emptee, None)

    def test_boolean(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.bool_value = True
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

        runner = self._create_runner()
        runner.ytypes.built_in_t.bool_value = False
        self.crud.update(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_embedded_enum(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.embeded_enum = ysanity.Runner.Ytypes.BuiltInT.EmbededEnumEnum.zero
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_enum(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.enum_value = YdkEnumTestEnum.none
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_union(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.younion = YdkEnumTestEnum.none
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_union_enum(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.enum_int_value = YdkEnumIntTestEnum.any
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_union_int(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.enum_int_value = 2
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_union_recursive(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.younion_recursive = 18
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)

        self.assertEqual(result, True)

    def test_union_list(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.llunion.append(1)
        runner.ytypes.built_in_t.llunion.append(3)
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    @unittest.skip('ConfD internal error.')
    def test_bits_leaflist(self):
        # User needs to append Bits instance manually to bits leaflist.
        runner = self._create_runner()
        bits_0 = runner.ytypes.built_in_t.BitsLlist_Bits()
        bits_1 = runner.ytypes.built_in_t.BitsLlist_Bits()
        bits_0['disable-nagle'] = True
        bits_1['auto-sense-speed'] = True
        runner.ytypes.built_in_t.bits_llist.extend([bits_0, bits_1])
        self.crud.create(self.ncc, runner)

        # Read into Runner1
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_enum_leaflist(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.enum_llist.append(YdkEnumTestEnum.local)
        runner.ytypes.built_in_t.enum_llist.append(YdkEnumTestEnum.remote)
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_identity_leaflist(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.identity_llist.append(ysanity.ChildIdentityIdentity())
        runner.ytypes.built_in_t.identity_llist.append(ysanity.ChildChildIdentityIdentity())
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_union_complex_list(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.younion_list.append("123:45")
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_identityref(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.identity_ref_value = \
            ysanity.ChildIdentityIdentity()
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    def test_leaflist_unique(self):
        runner = self._create_runner()
        with self.assertRaises(YPYModelError):
            runner.ytypes.built_in_t.llstring.extend([None for i in range(3)])

    def test_list_max_elements(self):
        runner = self._create_runner()
        elems = []
        n = 10
        for i in range(n):
            l = ysanity.Runner.OneList.Ldata()
            l.number = i
            l.name = str(i)
            elems.append(l)
        runner.one_list.ldata.extend(elems)
        self.assertRaises(YPYModelError,
                          self.crud.create, self.ncc, runner)

    def test_submodule(self):
        subtest = ysanity.SubTest()
        subtest.one_aug.name = 'test'
        subtest.one_aug.number = 3

        res = self.crud.create(self.ncc, subtest)

        subtest1 = self.crud.read(self.ncc, ysanity.SubTest())

        # Compare runners
        result = is_equal(subtest, subtest1)
        self.assertEqual(result, True)

    def test_identity_from_other_module(self):
        runner = self._create_runner()
        runner.ytypes.built_in_t.identity_ref_value = \
            ysanity_types.YdktestTypeIdentity()
        self.crud.create(self.ncc, runner)

        # Read into Runner2
        runner1 = ysanity.Runner()
        runner1 = self.crud.read(self.ncc, runner1)

        # Compare runners
        result = is_equal(runner, runner1)
        self.assertEqual(result, True)

    # def test_binary(self):
    #     pass

    # def test_binary_invalid(self):
    #     pass

if __name__ == '__main__':
    import sys
    if len(sys.argv) > 1:
        SanityTest.PROVIDER_TYPE = sys.argv.pop()

    suite = unittest.TestLoader().loadTestsFromTestCase(SanityTest)
    ret = not unittest.TextTestRunner(verbosity=2).run(suite).wasSuccessful()
    sys.exit(ret)
