#!/usr/bin/env python3
# Sifer Aseph
"""Tree data structure."""

class TreeNode:
    """Individual tree node."""

    def __init__(self):
        """Initialize an individual tree node."""
        self.left = None
        self.right = None
        self.data = None

    def traverse(self):
        """Traverse and print the node data."""
        if self.left:
            print("Left")
            print(self.left.data)
        if self.right:
            print("Right")
            print(self.right.data)

    def add_node_left(self, a_tree_node):
        """Add node to the left side of the tree."""
        self.left = a_tree_node


def main():
    """Create a test tree."""
    tree_root = TreeNode()
    tree_root.data = "1"
    print(tree_root.data)

    odd_node = TreeNode()
    odd_node.data = "3"
    print(odd_node.data)

    even_node = TreeNode()
    even_node.data = "2"
    print(even_node.data)

    tree_root.left = odd_node
    tree_root.right = even_node

    tree_root.traverse()

    more_node = TreeNode()
    more_node.data = "4"

    more_node.add_node_left(even_node)

    print(more_node.data)
    more_node.traverse()

if __name__ == "__main__":
    main()
