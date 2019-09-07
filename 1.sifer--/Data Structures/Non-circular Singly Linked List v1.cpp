/*
 Sifer Aseph
 Non-circular Singly Linked List v1
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
    List(){
        head = nullptr;
        tail = nullptr;
    }
    
    void createNode(int newData) {
        Node * tempNode = new Node;
        tempNode->data = newData;
        tempNode->next = nullptr;
        if (head==nullptr) {
            head = tempNode;
            tail = tempNode;
            //tempNode = nullptr;
            // Pointless since it'll go out of scope anyway.
        } else {
            tail->next = tempNode;
            tail = tempNode;
        }
    }
    
    void showEverything() {
        Node * tempNode = new Node;
        tempNode = head;
        
        while (tempNode != nullptr) {
            std::cout << tempNode->data << " ";
            tempNode = tempNode->next;
        }
    }
    
    int getHeadNodeData() {
        return head->data;
    }
    
    int returnSize() {
        Node * tempNode = new Node;
        tempNode = head;
        int size = 0;
        
        while (tempNode != nullptr) {
            size++;
            tempNode = tempNode->next;
        }
        
        return size;
    }
    
private:
    Node * head;
    Node * tail;
};

int main() {
    List testList;
    testList.createNode(10);
    std::cout << "Current head node data: " << testList.getHeadNodeData() << std::endl;
    testList.createNode(20);
    testList.createNode(30);
    testList.createNode(40);
    testList.showEverything();
    std::cout << std::endl;
    std::cout << "Size: " << testList.returnSize() << std::endl;
    testList.createNode(50);
    
    return 0;
}

