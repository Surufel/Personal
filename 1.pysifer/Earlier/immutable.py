#!/usr/bin/env python
# Sifer Aseph
"""Immutable objects."""

def main():
    """This is the only way to make a variable immutable.
    Python doesn't have constant so you can't really "protect" your variables."""
    test = 123
    example = (test,)
    example[0] = example[0] + 1

if __name__ == "__main__":
    main()
