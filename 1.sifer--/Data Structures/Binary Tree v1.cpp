/*
 Sifer Aseph
 Binary Tree v1
 */

// Next time, I am going to update the code to use smart pointers, like unique_ptr.
// The deletion function was just a bad idea.

#include <iostream>

//template <class T>
class Node {
public:
    friend class Tree;
    
private:
    int keyValue;
    Node * leftBranch;
    Node * rightBranch;
};

//template <class T>
class Tree {
public:
    Tree(): root(nullptr) {};
    ~Tree() {
        deleteTree(root); // This part got called twice when I called aTree.deleteTree(); so I had to re-do this.
    }
    
    void insert(int key) {
        if (root != nullptr) {
            insert (key, root);
        } else {
            root = new Node;
            root->keyValue = key;
            root->leftBranch = nullptr;
            root->rightBranch = nullptr;
        }
    }
    
    Node * search(int key) {
        return search(key, root);
    }
    
    /*
     void deleteTree() {
     deleteTree(root);
     }
     */
    
private:
    Node * root;
    
    void insert(int key, Node * leaf) {
        if (key < leaf->keyValue) {
            if (leaf->leftBranch != nullptr) {
                insert (key, leaf->leftBranch);
            } else {
                leaf->leftBranch = new Node;
                leaf->leftBranch->keyValue = key;
                leaf->leftBranch->leftBranch = nullptr;
                leaf->leftBranch->rightBranch = nullptr;
            }
        } else if (key >= leaf->keyValue) {
            if (leaf->rightBranch != nullptr) {
                insert(key, leaf->rightBranch);
            } else {
                leaf->rightBranch = new Node;
                leaf->rightBranch->keyValue = key;
                leaf->rightBranch->leftBranch = nullptr;
                leaf->rightBranch->rightBranch = nullptr;
            }
        }
    }
    
    Node * search(int key, Node * leaf) {
        if (leaf != nullptr) {
            if (key == leaf->keyValue) {
                return leaf;
            }
            if (key < leaf->keyValue) {
                return search(key, leaf->leftBranch);
            } else {
                return search(key, leaf->rightBranch);
            }
        } else {
            return nullptr;
        }
    }
    
    void deleteTree(Node * leaf) {
        if (leaf != nullptr) {
            deleteTree(leaf->leftBranch);
            deleteTree(leaf->rightBranch);
            delete leaf;
        }
    }
};

int main() {
    Tree aTree;
    
    aTree.insert(25);
    aTree.insert(10);
    
    std::cout << aTree.search(10) << " " << aTree.search(25) << std::endl;
    
    //aTree.deleteTree();
    
    return 0;
}
