#!/usr/bin/env python3
# Sifer Aseph
"""This code will convert feet to inches."""

def get_feet():
    """Get amount of feet to be converted."""
    feet = int(input("Enter amount of times you want to rub my feet: "))
    return feet

def convert_feet(feet):
    """Convert feet to inches."""
    inches = feet * 12
    return inches

def print_inches(inches):
    """Print converted inches."""
    print("There, you want to rub my feet", str(inches), "times!")

def main():
    """Test conversion runs."""
    feet = get_feet()
    inches = convert_feet(feet)
    print_inches(inches)

if __name__ == '__main__':
    main()
