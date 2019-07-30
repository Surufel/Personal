#!/usr/bin/env python3
# Sifer Aseph
"""apt-get wrapper program."""

import os

def main():
    """Use built-in to use Linux commands."""
    os.system('sudo apt-get update && sudo apt-get dist-upgrade')

if __name__ == "__main__":
    main()
