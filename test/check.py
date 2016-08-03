#!/usr/bin/env python

from ydk.providers import NetconfServiceProvider
from ydk.services import NetconfService

if __name__ == '__main__':
    import logging
    log = logging.getLogger('ydk')
    log.setLevel(logging.DEBUG)
    ch = logging.StreamHandler()
    log.addHandler(ch)

    provider = NetconfServiceProvider(address='127.0.0.1',
                             port=12022,
                             username='admin',
                             password='admin')
    s = NetconfService()
    s.get(provider,None)
    provider.close()

