#!/usr/bin/env python3
# Sifer Aseph
"""Summation recursion."""

def summation_recursion(current, accumulated):
    if current == 11:
        return accumulated
    else:
        return summation_recursion(current + 1, accumulated + current)

print(summation_recursion(1, 0))
