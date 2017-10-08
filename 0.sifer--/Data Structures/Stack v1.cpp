/*
 Sifer Aseph
 Stack v1
 LIFO, implemented with an array
 */

#include <iostream>

class Stack {
public:
    Stack(int capacity) {
        if (capacity <= 0) {
            std::cout << "Must be positive.\n";
            std::exit(EXIT_FAILURE);
        }
        storage = new int[capacity];
        this->capacity = capacity;
        top = -1;
    }
    
    ~Stack() {
        delete storage;
    }
    
    void push(int data) {
        if (top == capacity) {
            std::cout << "Overflow.\n";
            std::exit(EXIT_FAILURE);
        }
        top++;
        storage[top] = data;
    }
    
    int peek() { // https://en.wikipedia.org/wiki/Peek_(data_type_operation)
        if (top == -1) {
            std::cout << "Empty.\n";
            std::exit(EXIT_FAILURE);
        }
        return storage[top];
    }
    
    void pop() {
        if (top == -1) {
            std::cout << "Empty.\n";
            std::exit(EXIT_FAILURE);
        }
        top--;
    }
    
    bool isEmpty() {
        return top == -1;
    }
    
private:
    int top;
    int capacity;
    int *storage;
};

int main() {
    Stack example(3);
    example.push(1);
    example.push(2);
    example.push(3);
    std::cout << example.peek() << std::endl;
    std::cout << example.isEmpty() << std::endl;
    example.pop();
    example.pop();
    example.pop();
    std::cout << example.isEmpty() << std::endl;
    example.pop();
    std::cout << example.isEmpty() << std::endl;
    
    return 0;
}
