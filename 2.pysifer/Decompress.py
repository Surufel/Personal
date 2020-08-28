#!/usr/bin/env python3
# Sifer Aseph

import zlib

filename = "" # Put the filename here.

compressed_contents = open(filename, 'rb').read()
decompressed_contents = zlib.decompress(compressed_contents)
