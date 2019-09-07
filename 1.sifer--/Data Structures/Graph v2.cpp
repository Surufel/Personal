/*
 Sifer Aseph
 Graph v2
 Representation: Adjacency List
 */

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>

class Graph {
public:
    Graph() {
        adjList.emplace('A', std::vector<char> {'B', 'C'});
        adjList.emplace('B', std::vector<char> {'A', 'D', 'E'});
        adjList.emplace('C', std::vector<char> {'A', 'F'});
        adjList.emplace('D', std::vector<char> {'B'});
        adjList.emplace('E', std::vector<char> {'B', 'F'});
        adjList.emplace('F', std::vector<char> {'C', 'E'});
    }
    
    std::set<char> difference(const std::vector<char>& a, const std::set<char>& b)
    {
        std::set<char> result;
        std::set_difference(a.begin(), a.end(), b.begin(), b.end(), std::inserter(result, result.begin()));
        return result;
    }
    
    std::set<char> DFS(char start) {
        std::set<char> visited;
        std::stack<char> simpleStack;
        simpleStack.push(start);
        char vertex;
        
        while (!(simpleStack.empty())) {
            vertex = simpleStack.top();
            simpleStack.pop();
            
            if (visited.find(vertex) == visited.end()) { // if vertex not in visited
                visited.insert(vertex);
                
                for (char c : difference(adjList[vertex], visited)) {
                    simpleStack.push(c);
                }
            }
        }
        
        return visited;
    }
    
private:
    std::map<char, std::vector<char>> adjList;
};

int main() {
    Graph testGraph;
    std::set<char> testing = testGraph.DFS('A'); // 'E', 'D', 'F', 'A', 'C', 'B'
    for (std::set<char>::iterator i = testing.begin(); i != testing.end(); ++i) {
        char element = *i;
        std::cout << element << "\n";
    }
    
    return 0;
}
