/*
 Sifer Aseph
 Queue
 Waiting for Ayush to catch up before I start this
 */

#include <iostream>
#include <queue>

class Queue {
public:
    void push(int x) {
        
    }
    
private:
    int data;
    Queue *next;
    Queue *front = nullptr, *rear = nullptr, *p = nullptr, *np = nullptr;
};

int main() {
    // I had a surprisingly tough time implementing my own so for future reference.
    std::queue<int> example;
    example.push(1);
    example.push(2);
    example.push(3);
    std::cout << example.front() << std::endl;
    std::cout << example.back() << std::endl;
    
    
    
    return 0;
}
