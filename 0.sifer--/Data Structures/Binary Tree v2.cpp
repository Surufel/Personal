/*
 Sifer Aseph
 Binary Tree v2
 */

#include <iostream>

struct Node {
    int data;
    Node *left;
    Node *right;
};

class Tree {
public:
    Tree(int growTree) {
        auto *newTree = new Node;
        newTree->data = growTree;
        newTree->left = nullptr;
        newTree->right = nullptr;
        root = newTree;
    }
    
    ~Tree() {
        cutTree();
    }
    
    void insert(int newData, Node *branch) {
        if (newData < branch->data) {
            if (branch->left != nullptr) {
                insert(newData, branch->left);
            } else {
                auto *newNode = new Node;
                newNode->data = newData;
                newNode->left = nullptr;
                newNode->right = nullptr;
                branch->left = newNode;
            }
        } else if (newData >= branch->data) {
            if (branch->right != nullptr) {
                insert(newData, branch->right);
            } else {
                auto *newNode = new Node;
                newNode->data = newData;
                newNode->left = nullptr;
                newNode->right = nullptr;
                branch->right = newNode;
            }
        }
    }
    
    void insert(int newData) {
        if (root != nullptr) {
            insert(newData, root);
        } else {
            auto *newNode = new Node;
            newNode->data = newData;
            newNode->left = nullptr;
            newNode->right = nullptr;
            root = newNode;
        }
    }
    
    void cutTree(Node *branch) {
        if (branch != nullptr) {
            cutTree(branch->left);
            cutTree(branch->right);
            delete branch;
        }
    }
    
    void cutTree() {
        cutTree(root);
        root = nullptr;
    }
    
    Node* search(int desired, Node *branch) {
        if (branch != nullptr) {
            if (desired == branch->data)
                return branch;
            if (desired < branch->data) {
                return search(desired, branch->left);
            } else {
                return search(desired, branch->right);
            }
        } else {
            return nullptr;
        }
    }
    
    void search(int desired) {
        search(desired, root);
    }
    
    void printTreeInOrder(Node *branch) {
        if (branch != nullptr) {
            printTreeInOrder(branch->left);
            std::cout << branch->data << " ";
            printTreeInOrder(branch->right);
        }
    }
    
    /* PRE
     std::cout << branch->data << " ";
     printTreeInOrder(branch->left);
     printTreeInOrder(branch->right);
     
     POST
     printTreeInOrder(branch->left);
     printTreeInOrder(branch->right);
     std::cout << branch->data << " ";
     */
    
    void printTreeInOrder() {
        printTreeInOrder(root);
        std::cout << " ";
    }
    
private:
    Node *root;
};

int main() {
    Tree test(2);
    test.insert(1);
    test.insert(3);
    test.insert(5);
    test.printTreeInOrder();
    test.search(2);
    test.cutTree();
    
    return 0;
}
