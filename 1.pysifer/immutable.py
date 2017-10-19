#!/usr/bin/env python
# Sifer Aseph
# Immutable

# This is the only way to make a variable immutable, as Python doesn't have constant so you can't really "protect" your variables:
A = 123
example = (A,)
example[0] = example[0] + 1
