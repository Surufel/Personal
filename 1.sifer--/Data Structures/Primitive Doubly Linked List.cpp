/*
  Sifer Aseph
  Primitive Doubly Linked List
 */

#include <iostream>

template <class T>
class List;

template <class T>
class Node {
public:
    Node(T newData, Node * previousNode = nullptr, Node * nextNode = nullptr): data(newData), previous(previousNode), next(nextNode) {};

    void setPreviousNode(Node * newPrevious) {
        previous = newPrevious;
    }

    void setNextNode(Node * newNext) {
        next = newNext;
    }

    T getData() {
        return data;
    }

    void changeData(T newData) {
        data = newData;
    }

    friend class List<T>;

private:
    T data;
    Node * previous;
    Node * next;
};

template <class T>
class List {
public:
    List(T data): listSize(1), tail(nullptr) {
        head = new Node<T>(data);
    };

    void createNode(T data) {
        Node<T> * newNode = new Node<T>(data);
        tail = newNode;
        listSize++;
    }

    Node<T> * returnHead() {
        return head;
    }

    Node<T> * returnTail() {
        return tail;
    }

    int returnListSize() {
        return listSize;
    }

private:
    int listSize;
    Node<T> * head;
    Node<T> * tail;
};

int main() {
    

    return 0;
}
