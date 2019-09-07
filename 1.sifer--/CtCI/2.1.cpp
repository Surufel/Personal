/*
 Sifer Aseph
 2.1 version 1
 Back to the basics.
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Node {
    int data;
    Node *next;
};

void createNewNodeAtHead(int newData, Node *&headNode) { // right to left read; Node&* is illegal; Node*& is reference to pointer
    // Create new node with stuff in it
    Node *temp = new Node;
    temp->data = newData;
    temp->next = headNode;
    
    // Have the head node point to temp, the new node
    headNode = temp;
}

void displayNodes(const Node *headNode) {
    while (headNode != nullptr) {
        std::cout << headNode->data << " ";
        headNode = headNode->next;
    }
    std::cout << "\n";
}

int sizeOfCollectionOfNodes(const Node *headNode) {
    int size = 0;
    while (headNode != nullptr) {
        size++;
        headNode = headNode->next;
    }
    
    return size;
}

void deleteTheCollection(Node *&headNode) {
    Node *temp = headNode;
    
    // Clear head first
    headNode = nullptr;
    
    while (temp != nullptr) {
        Node *next = temp->next;
        delete temp;
        temp = next;
    }
}

void deleteHeadNode(Node *&headNode) {
    if (headNode != nullptr) {
        Node *nextOne = headNode->next;
        delete headNode;
        headNode = nextOne;
    }
}

void deleteSpecific(int desiredData, Node *headNode) {
    while (headNode != nullptr) {
        Node *nextNode = headNode->next;
        
        if (headNode->next->data == desiredData && headNode->next != nullptr) { // Does the next node have the desired data? If so...
            nextNode->data = nextNode->next->data;
            nextNode->next = nextNode->next->next;
            
            return;
        } else {
            headNode = headNode->next;
        }
    }
}

int main() {
    Node *example = nullptr;
    createNewNodeAtHead(1, example);
    createNewNodeAtHead(2, example);
    createNewNodeAtHead(3, example);
    createNewNodeAtHead(4, example);
    createNewNodeAtHead(5, example);
    createNewNodeAtHead(6, example);
    displayNodes(example);
    
    //deleteHeadNode(example);
    //displayNodes(example);
    
    deleteSpecific(4, example);
    displayNodes(example);
    
    std::cout << "Size: " << sizeOfCollectionOfNodes(example) << std::endl;
    //displayNodes(example);
    
    //deleteTheCollection(example);
    //std::cout << "Size: " << sizeOfCollectionOfNodes(example) << std::endl;
    
    return 0;
}
