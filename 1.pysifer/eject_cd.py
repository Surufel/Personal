#!/usr/bin/env python3
# Sifer Aseph
"""eject cd wrapper program."""

import os

def main():
    os.system( "eject /dev/scd0" )

if __name__ == "__main__":
    main()
