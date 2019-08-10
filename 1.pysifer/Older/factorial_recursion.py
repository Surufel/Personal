#!/usr/bin/env python3
# Sifer Aseph
"""Factorial recursion."""

def factorial_recursion(num):
    if num == 1:
        return num
    else:
        return num * factorial_recursion(num-1)

print(factorial_recursion(5))
