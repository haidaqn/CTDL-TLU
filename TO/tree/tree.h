#ifndef tree_h
#define tree_h
#include <iostream>
#include "node.h"
using namespace std;
template <class T>

class Tree {

private:
    Node<T> *root;
    void add(T value, Node<T> *&r) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->left = 0;
        tmp->right = 0;
        if(r ==0 )
            r = tmp;
        if(r->data == value)
            return;
        if(r-> data < value)
            add(value, r->right);
        if(r->data > value)
            add(value, r->left);
    }
    bool search(T value, Node<T> *r) {
        if(r ==0 )
            return false;
        if(r->data == value )
            return true;
        if(r->data < value)
            return search(value, r->right);
        else {
            return search(value, r->left);
        }
    }
    int cc(Node<T> *r) const {
        if(r ==0 )
            return 0;
        return max(cc(r->left), cc(r->right)) + 1;
    }
public:
    Tree() {
        root = 0;
    }
    void ADD(T value) {
        add(value, root);
    }
    void Search(T value) {
        cout << search(value, root);
    }
    void Height() const {
        cout << cc(root);
    }

};

#endif