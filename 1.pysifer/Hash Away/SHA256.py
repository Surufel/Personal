#!/usr/bin/env python3
# Sifer Aseph
"""SHA256, don't try this at home."""

import os
import hashlib

def sha256(password):
    salting = os.urandom(10)
    hashing = hashlib.sha256(password + salting)
    return (salting.encode('hex'), hashing.hexdigest())
