#!/usr/bin/env python3
"""
Sifer Aseph

ping
"""

import os

def main():
    """Use built-in to ping."""
    host_name = "siferaseph.com"
    response = os.system("ping -c 1 " + host_name)

    if response == 0:
        print(host_name, ': up')
    else:
        print(host_name, ': down')

if __name__ == "__main__":
    main()
