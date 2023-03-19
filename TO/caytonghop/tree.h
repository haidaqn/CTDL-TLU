#ifndef tree_h
#define tree_h

#include "node.h"
#include <iostream>
using namespace std;
template <class T>

class Tree {

private :
    Node<T> *root;
    Node<T> *GetNode(T val, Node<T> *r) {
        if (r == NULL)
            return NULL;
        if(r->data == val)
            return r;
        Node<T> *r1 = GetNode(val, r->pChild);
        if(r1 != 0)
            return r1;
        Node<T> *r2 = GetNode(val, r->pNext);
        if(r2 != 0)
            return r2;
        return NULL;
    }
    void PreOrder(Node<T> *r) const {
        if(r!= 0 ) {
            cout << r->data << endl;
            PreOrder(r->pChild);
            PreOrder(r->pNext);
        }
    }
    Node<T> *GetParent(Node<T> *r, T value) {
        if (r != 0)
        {
            Node<T> *p = r->pChild;
            while (p != 0)
            {
                if (p->data == value)
                    return r;
                Node<T> *r1 = GetParent(p, value);
                p = p->pNext;
                if (r1 != 0)
                    return r1;
            }
        }
        return 0;
    }

public:
    Tree() {
        root = 0;
    }
    void addRoot(T value) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->pChild = 0;
        tmp->pNext = 0;
        if(root ==0 )
            root = tmp;
        else
            root->data = value;
    }
    void add(T value, T valParent ) {
        Node<T> *tmp = GetNode(valParent, root);
        if(tmp != 0 ) {
            Node<T> *q = new Node<T>;
            q->data = value;
            q->pChild = 0;
            q->pNext = 0;
            if(tmp->pChild==0) {
                tmp->pChild= q;
            }
            else {
                Node<T> *p = tmp->pChild;
                while(p->pNext != 0)
                    p = p->pNext;
                p->pNext = q;
            }
        }
    }
    void print() const {
        PreOrder(root);
    }
    void Delete(T val)
    {
        Node<T> *p = GetParent(root,val);
        if (p != 0)
        {
            if (p->pChild->data == val)
            {
                Node<T> *p1 = p->pChild;
                p->pChild = p->pChild->pNext;
                delete p1;
            }
            else
            {
                p = p->pChild;
                while (p->pNext->data != val)
                    p = p->pNext;
                Node<T> *q = p->pNext;
                p->pNext = q->pNext;
                delete q;
            }
        }
        else
        {
            if (root != 0 && root->data == val)
            {
                Node<T> *p1 = root->pChild;
                root = root->pNext;
                delete p1;
            }
        }
    }
};

#endif