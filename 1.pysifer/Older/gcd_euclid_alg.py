#!/usr/bin/env python3
# Sifer Aseph
"""
GCD
Figure 1.5
"""

def euclid_alg(first, second):
    """Find the greatest common divisor."""
    if first == 0:
        return first
    return euclid_alg(second, first % second)

def main():
    """Print test cases."""
    print(euclid_alg(120, 10))
    print(euclid_alg(10, 120))

if __name__ == "__main__":
    main()
