#!/usr/bin/env python3
# Sifer Aseph
"""A module to convert square feet into acre."""

def get_square_feet():
    """This function will get the desired square feet."""
    square_feet = int(input("Enter desired square feet to convert to acre: "))

    return square_feet

def convert_to_acre(square_feet):
    """This function will convert square feet to acre."""
    acre = square_feet / 43560.00

    return acre

def print_acre(square_feet, acre):
    """This function will print square feet and acre."""
    print("Square feet: ", square_feet)
    print("Acre: ", acre)

def main():
    sf = get_square_feet()
    ac = convert_to_acre(sf)
    print_acre(sf, ac)

if __name__ == "__main__":
    main()
