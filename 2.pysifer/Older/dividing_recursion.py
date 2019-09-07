#!/usr/bin/env python3
# Sifer Aseph
"""Dividing recursion."""

tasks = [1, 2, 3, 4, 5, 6, 7]

def dividing_recursively(tasks):
    if len(tasks) == 1:
        task = tasks[0]
        print("Working on ", task)
    else:
        mid = len(tasks) // 2
        first_half = tasks[:mid]
        second_half = tasks[mid:]

        dividing_recursively(first_half)
        dividing_recursively(second_half)

dividing_recursively(tasks) # vs print(dividing_recursively(tasks))
