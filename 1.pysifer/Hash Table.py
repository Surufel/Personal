#!/usr/bin/env python3
"""
Sifer Aseph

Hash table data structure
"""

class HashTable(object):
    table = [None] * 512

    def retrieve(self, key):
        total = 0
        for i in range(len(key)):
            total += ord(key[i]) * (7**i)
        return (len(key) * total) % 256

    def insert(self, key):
        value = self.retrieve(key)
        if self.table[value] == None:
            self.table[value] = key
        else:
            if type(self.table[value]) == list:
                self.table[value].append(key)
            else:
                self.table[value] = [self.table[value], key]

    def delete(self,key):
        value = self.retrieve(key)
        if self.table[value] != None:
            if type(self.table[value]) == list:
                i = self.table[value].index(key)
                self.table[value][i] = None
            else:
                self.table[value] = None
        else:
            KeyError()

    def lookup(self,key):
        found = False
        value = self.retrieve(key)
        if type(self.table[value]) == list:
            found = key in self.table[value]
        else:
            found = self.table[value] == key
        return found

test = HashTable()
test.insert("A")
test.insert("B")
test.insert("C")
test.delete("C")
print test.lookup("A")
print test.lookup("B")
print test.lookup("C")
