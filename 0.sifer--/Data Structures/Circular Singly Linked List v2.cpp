/*
 Sifer Aseph
 Circular Singly Linked List v2
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
        size = 0;
    }
    
    void insertAtHead(int newData) {
        // Create a box.
        auto * newNode = new Node;
        // Stuff the data into this box.
        newNode->data = newData;
        
        // If this is an empty list, then head will point to the new node.
        if (head == nullptr) {
            // New node's next will point to itself.
            newNode->next = newNode;
            // Head will point to new node.
            head = newNode;
            // Increase size of list from 0 to 1.
            size++;
        } else {
            // The tricky part is here. Order matters.
            
            // 1. Create a tempoary node to point to head.
            Node * temp = head;
            // 2. While the next of temporary node is not pointing to head, go to the next one until it reaches head.
            while (temp->next != head) {
                temp = temp->next;
            }
            // 3. New node's next will point to head.
            newNode->next = head;
            // 4. Head will be the new node.
            head = newNode;
            // 5. Temporary node's next will point to head.
            temp->next = head;
            
            // Increase size of list.
            size++;
        }
    }
    
    void traverse() {
        Node * temp = head;
        
        //for (int step = 0; step < size; step++) {
        while (temp) {
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }
    
private:
    int size;
    Node * head;
};

int main() {
    List testList;
    testList.insertAtHead(5);
    testList.insertAtHead(10);
    testList.insertAtHead(15);
    testList.insertAtHead(20);
    testList.insertAtHead(25);
    testList.insertAtHead(30);
    testList.traverse();
    
    return 0;
}

