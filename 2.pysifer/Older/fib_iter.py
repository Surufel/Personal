#!/usr/bin/env python3
# Sifer Aseph
"""Fibonacci iteration version."""

def iteration(num):
    """Iterate Fibonacci sequence."""
    if num == 0:
        return 0
    elif num == 1:
        return 1
    elif num > 1:
        f_n0 = 0
        f_n1 = 1
        f_n2 = 2

        for i in range(3, num):
            f_n0 = f_n1 + f_n2
            f_n1 = f_n2
            f_n2 = f_n0

        return f_n0
    else:
        return -1
