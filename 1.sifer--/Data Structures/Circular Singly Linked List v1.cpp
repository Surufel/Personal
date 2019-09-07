/*
 Sifer Aseph
 Circular Singly Linked List v1
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
        auto * newNode = new Node;
        newNode->data = newData;
        
        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
            size++;
        } else {
            Node * temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newNode->next = head;
            head = newNode;
            temp->next = head;
            
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
    testList.traverse();
    
    return 0;
}
