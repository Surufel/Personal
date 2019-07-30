#!/usr/bin/env python3
# Sifer Aseph
"""
Rewrite of max of two function.

A module that rewrites the built-in function max() as an exercise.
Ahem, this is my solution to a certain website. If you're here, you're probably cheating.
"""

def get_two_numbers():
    """Get two numbers from user."""
    num1 = int(input("What is the first number? "))
    num2 = int(input("What is the second number? "))

    return num1, num2

def max_of_two_numbers(num1, num2):
    """Comparison function."""
    if num1 < num2:
        return num2
    return num1

def print_largest_of_two(num1, num2):
    """Print the largest of the two."""
    print("The largest number of the two is " + str(max_of_two_numbers(num1, num2)) + ".")

def main():
    """Test runs."""
    one, two = get_two_numbers()
    print_largest_of_two(one, two)

if __name__ == "__main__":
    main()
