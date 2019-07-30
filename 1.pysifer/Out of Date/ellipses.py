#!/usr/bin/env python3
# Sifer Aseph
# I have no idea why I wrote this simple code but I did. To entertain you I included a joke:
# Q: Why do programmers always mix up Halloween and Christmas?
# A: Because Oct 31 == Dec 25!
# Laugh damnit!

def getName():
    ''' This function does something very, very special. It asks for your name. '''
    yourName = raw_input("What is your name? ")
    return yourName

def main():
    yourName = getName()
    print "You entered: " + yourName + ", which is probably not really your name."

if __name__ == "__main__":
    main()
