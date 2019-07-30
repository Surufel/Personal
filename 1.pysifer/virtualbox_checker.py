#!/usr/bin/env python3
"""
Sifer Aseph

virtualbox checker
"""

import os

def main():
    """Use built-in to check if virtualbox is used."""
    virtual_box_mac_address = "08:00:27"
    mac_address_file = '/sys/class/net/eth0/address' # find /sys -name eth0

    open_file = open(mac_address_file, "r")
    line = open_file.readline()

    if line.startswith(virtual_box_mac_address):
        print("We are inside a Linux vbox.")
        system_name = os.system("uname -a")
        print(system_name)
    else:
        print("We are probably not inside a Linux vbox.")

if __name__ == "__main__":
    main()
