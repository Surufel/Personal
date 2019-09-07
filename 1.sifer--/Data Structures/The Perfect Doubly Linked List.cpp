/*
 Sifer Aseph
 The Perfect Doubly Linked List

 I was teaching someone on IRC how to write a doubly linked list after building a singly linked list. Easier than I thought.
 The next step would have been a circular linked list, that is, having the tail point to the head. It's just a matter
 of keeping track of pointers and having the method be modified to their respective linked list traits.
 */

#include <iostream>

struct node {
    int stuff;
    node * next;
    node * prev;
} * head;

class wrapper {
public:
    wrapper() {
        head = nullptr;
    }
    
    void create(int createStuff) {
        struct node * aNode;
        struct node * temp;

        temp = new(struct node);
        temp->stuff = createStuff;
        temp->next = nullptr;

        if (head == nullptr) {
            temp->prev = nullptr;
            head = temp;
        } else {
            aNode = head;
            while (aNode->next != nullptr) {
                aNode = aNode->next;
            }

            aNode = temp;
        }

    }
    
    
};

int main() {
    

    return 0;
}
