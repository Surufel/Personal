/*
 Sifer Aseph
 Non-circular Singly Linked List v2
 */

#include <iostream>

struct Node {
public:
    int data;
    Node * next;
    
private:
};

class List {
public:
    List() {
        head = nullptr;
    }
    
    void insertNodeAtHead(int newData) {
        Node * newNodeTemp = new Node;
        newNodeTemp->data = newData;
        
        // The new node will point to the head.
        newNodeTemp->next = head;
        // The head will point to the new node.
        head = newNodeTemp;
    }
    
    void traverseAndDisplay() {
        Node * pointNode = new Node;
        pointNode = head;
        
        int steps = 1;
        while (pointNode != nullptr) {
            std::cout << steps << ": " << pointNode->data << " ";
            steps++;
            pointNode = pointNode->next;
        }
    }
    
private:
    Node * head;
};

int main() {
    List testList;
    testList.insertNodeAtHead(10);
    testList.insertNodeAtHead(20);
    testList.insertNodeAtHead(30);
    testList.traverseAndDisplay();
    
    return 0;
}
