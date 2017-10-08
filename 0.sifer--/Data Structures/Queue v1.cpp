/*
 Sifer Aseph
 Queue v1
 FIFO
 Operations: enqueue, dequeue, traverseAndDisplay, isEmpty
 */

#include <iostream>

struct Node {
    int data;
    Node * next;
};

class Queue {
public:
    Queue() {
        head = nullptr;
    }
    
    void enqueue(int newData) { // Insert at tail instead of at the usual head.
        Node * newNodeAtLast = new Node;
        newNodeAtLast->data = newData;
        newNodeAtLast->next = nullptr;
        
        if (head == nullptr) {
            head = newNodeAtLast;
        } else {
            Node * temp = new Node;
            temp = head;
            
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            
            temp->next = newNodeAtLast;
        }
    }
    
    void dequeue() { // O(1)
        if (head != nullptr) {
            Node * temp = new Node;
            temp = head;
            delete head;
            head = temp->next;
        }
    }
    
    void traverseAndDisplay() {
        Node * traveler = new Node;
        traveler = head;
        while (traveler) {
            std::cout << traveler->data << " ";
            traveler = traveler->next;
        }
        std::cout << std::endl;
    }
    
    bool isEmpty() {
        return head == nullptr;
    }
    
private:
    Node * head;
};

int main() {
    Queue testQueue;
    std::cout << testQueue.isEmpty() << std::endl;
    testQueue.enqueue(5);
    testQueue.enqueue(10);
    testQueue.enqueue(15);
    testQueue.enqueue(20);
    testQueue.enqueue(25);
    testQueue.traverseAndDisplay();
    testQueue.dequeue();
    testQueue.traverseAndDisplay();
    
    return 0;
}
