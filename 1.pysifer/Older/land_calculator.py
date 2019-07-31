#!/usr/bin/env python3
# Sifer Aseph
"""A module to convert square feet into acre."""

def get_square_feet():
    """Get the desired square feet from users."""
    square_feet = int(input("Enter desired square feet to convert to acre: "))

    return square_feet

def convert_to_acre(square_feet):
    """Convert square feet to acre."""
    acre = square_feet / 43560.00

    return acre

def print_acre(square_feet, acre):
    """Print square feet and acre."""
    print("Square feet: ", square_feet)
    print("Acre: ", acre)

def main():
    """Test runs."""
    squaref = get_square_feet()
    acre = convert_to_acre(squaref)
    print_acre(squaref, acre)

if __name__ == "__main__":
    main()
