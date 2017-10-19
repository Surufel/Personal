/*
 Sifer Aseph
 Stack v2
 LIFO, implemented with a linked list
 */

#include <iostream>

struct Node {
public:
    Node () {
        
    }
    
    int data;
    Node * next;
    
private:
    
};

class Stack {
public:
    Stack(int desiredSize): size(desiredSize) {
        count = 0;
        head = nullptr;
    }
    
    void push(int newData) {
        Node * newNodeTemp = new Node;
        newNodeTemp->data = newData;
        newNodeTemp->next = head;
        head = newNodeTemp;
        count++;
    }
    
    void pop() {
        if (head != nullptr) {
            Node * secondNode = head->next;
            delete head;
            head = secondNode;
        }
        count--;
    }
    
    int peek() {
        return head->data;
    }
    
    bool isFull() {
        return count == size;
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    void traverseAndDisplay() {
        Node * climber = new Node; // I really don't like insects...
        climber = head;
        while (climber) {
            std::cout << "---" << climber->data << "--" << std::endl;
            climber = climber->next;
        }
    }
    
private:
    int size;
    int count;
    Node * head;
};

int main() {
    Stack testStack(5);
    std::cout << testStack.isEmpty() << std::endl;
    testStack.push(11);
    std::cout << testStack.isEmpty() << std::endl;
    std::cout << testStack.peek() << std::endl;
    testStack.push(22);
    testStack.push(33);
    testStack.push(44);
    testStack.push(55);
    std::cout << testStack.isFull() << std::endl;
    testStack.traverseAndDisplay();
    testStack.pop();
    testStack.pop();
    testStack.traverseAndDisplay();
    
    return 0;
}
