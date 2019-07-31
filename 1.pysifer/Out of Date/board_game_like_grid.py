# Sifer Aseph
"""Board game-like grid."""

def main():
    """Create grid for board games."""
    # List of lists
    board1 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

    # Dictionary of lists
    board2 = {"a":[1, 2, 3], "b":[4, 5, 6], "c":[7, 8, 9]}

    board_example = {}
    for row in range(3):
        for col in range(3):
            board_example[(row, col)] = 0
