# Sifer Aseph
# SHA256

import os
import hashlib

def sha256(password):
    salting = os.urandom(10)
    hashing = hashlib.sha256(password + salting)
    return (salting.encode('hex'), hashing.hexdigest())
