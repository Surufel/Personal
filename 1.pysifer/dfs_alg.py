# Sifer Aseph
"""DFS algorithm."""

def dfs(graph, start):
    """Depth first search algorithm."""
    visited, stack = set(), [start]
    while stack:
        vertex = stack.pop()
        if vertex not in visited:
            visited.add(vertex)
            stack.extend(graph[vertex] - visited)
    return visited

def main():
    """Test runs.   """
    graph = {'A': set(['B', 'C']),
             'B': set(['A', 'D', 'E']),
             'C': set(['A', 'F']),
             'D': set(['B']),
             'E': set(['B', 'F']),
             'F': set(['C', 'E'])}

    print(dfs(graph, 'A')) # {'E', 'D', 'F', 'A', 'C', 'B'}
