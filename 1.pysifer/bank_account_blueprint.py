#!/usr/bin/env python3
# Sifer Aseph
"""
Bank account blueprint.

https://wiki.python.org/moin/SimplePrograms
"""

class BankAccount():
    """Bank account object."""

    def __init__(self, initial_balance=0):
        """Initialize starting balance."""
        self.balance = initial_balance

    def deposit(self, amount):
        """Deposit into bank account."""
        self.balance += amount

    def withdraw(self, amount):
        """Withdraw from bank account."""
        self.balance -= amount

    def overdrawn(self):
        """Show an overdrawn account."""
        return self.balance < 0

def main():
    """Test run."""
    my_account = BankAccount(150000)
    my_account.withdraw(5)
    print(my_account.balance)

if __name__ == "__main__":
    main()
