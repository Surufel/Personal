#!/usr/bin/env python
# Sifer Aseph
# My Little AFL Fuzzer

import sys
import afl

from cryptography.hazmat.primitives.asymmetric.utils import (
    decode_rfc6979_signature
)

def main():
    afl.init()

    try:
        decode_rfc6979_signature(sys.stdin.read())
    except ValueError:
        pass

if __name__ == '__main__':
    main()
