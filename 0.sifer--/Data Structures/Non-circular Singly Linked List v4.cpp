/*
 Sifer Aseph
 Non-circular Singly Linked List v4
 */

#include <iostream>
#include <vector>

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
    
    void insertNodeAtHead(int newData) { // O(1)
        Node * newNodeTemp = new Node;
        newNodeTemp->data = newData;
        
        newNodeTemp->next = head;
        head = newNodeTemp;
    }
    
    void removeNodeAtHead() { // O(1)
        if (head != nullptr) {
            Node * secondNode = head->next;
            delete head;
            head = secondNode;
        }
    }
    
    bool ifNodeExist(int desiredData) {
        Node * pointerNode = new Node;
        pointerNode = head;
        
        int position = 1;
        
        while (pointerNode) {
            if (pointerNode->data == desiredData) {
                std::cout << "Found at position: " << position << std::endl;
                return true;
            } else {
                position++;
                pointerNode = pointerNode->next;
            }
        }
        
        return false;
    }
    /*
     bool ifNodeDuplicate() {
     Node * pointerNode = head;
     std::vector<int> checkBox;
     
     while (pointerNode) {
     checkBox.push_back(pointerNode->data);
     pointerNode = pointerNode->next;
     }
     
     
     
     return false;
     }
     */
    void displayLastNode() {
        Node * pointer = head;
        
        if (pointer != nullptr) {
            while (pointer->next != nullptr) {
                pointer = pointer->next;
            }
        }
        
        std::cout << pointer->data << std::endl;
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
    
    void clearList() {
        auto * traversalPointer = head;
        
        head = nullptr; // This is safe to do now since traversalPointer has it temporarily.
        
        while (traversalPointer) {
            Node * theNextNode = traversalPointer->next;
            delete traversalPointer;
            traversalPointer = head;
        }
        
    }
    
    int countSize() {
        int size = 0;
        Node * crawler = new Node;
        crawler = head;
        
        while (crawler != nullptr) {
            size++;
            crawler = crawler->next;
        }
        
        return size;
    }
    
    int countSizeForVersion() {
        int size = 0;
        
        for (const Node * pointerNode = head; pointerNode != nullptr; pointerNode = pointerNode->next) {
            size++;
        }
        
        return size;
    }
    
private:
    Node * head;
};

int main() {
    List testList;
    testList.insertNodeAtHead(10);
    testList.insertNodeAtHead(20);
    testList.insertNodeAtHead(30);
    //testList.traverseAndDisplay();
    //std::cout << std::endl << "Size: " << testList.countSizeForVersion() << std::endl;
    testList.insertNodeAtHead(40);
    testList.insertNodeAtHead(50);
    testList.insertNodeAtHead(60);
    testList.insertNodeAtHead(70);
    testList.insertNodeAtHead(80);
    testList.insertNodeAtHead(90);
    testList.traverseAndDisplay();
    //testList.removeNodeAtHead();
    std::cout << std::endl;
    //testList.traverseAndDisplay();
    //std::cout << testList.ifNodeExist(40) << std::endl;
    //testList.displayLastNode();
    //std::cout << testList.ifNodeDuplicate() << std::endl;
    testList.clearList();
    std::cout << "Something here? " << std::endl;
    testList.traverseAndDisplay();
    testList.insertNodeAtHead(11);
    testList.insertNodeAtHead(22);
    testList.insertNodeAtHead(33);
    std::cout << "Now? ";
    testList.traverseAndDisplay();
    std::cout << std::endl;
    
    return 0;
}


