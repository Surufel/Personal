#!/usr/bin/env python3
# Sifer Aseph
"""
I have no idea why I wrote this simple code but I did. Here is your entertainment.

Q: Why do programmers always mix up Halloween and Christmas?
A: Because Oct 31 == Dec 25!
Laugh damnit!
"""

def get_name():
    """Does something very special. It asks for your name."""
    your_name = input("What is your name? ")
    return your_name

def main():
    """Whatever."""
    your_name = get_name()
    print("You entered: " + your_name + ", which is probably not really your name.")

if __name__ == "__main__":
    main()
