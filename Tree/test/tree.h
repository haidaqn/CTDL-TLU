#ifndef tree_h
#define tree_h
#include "NodeTree.h"
#include "list.h"
#include <bits/stdc++.h>
using namespace std;

template<class T>

class Tree {
private:
    NodeTree<T> *root;
    NodeTree<T> *GetNodeParent(T val, NodeTree<T> *r) {
        if(r == 0)
            return 0;
        if(r->key == val)
            return r;
        NodeTree<T> *r1 = GetNodeParent(val, r->pChild);
        if(r1 != 0)
            return r1;
        NodeTree<T> *r2 = GetNodeParent(val, r->pChild);
        if (r2 != 0)
            return r2;
        return 0;
    }
public:
    Tree() {
        root = 0;
    }
    void add(T val) {
        if(root ==0) {
            root = new NodeTree<T>;
            root->key = val;
            root->pChild = 0;
            root->pNext = 0;
        }
        else {
            root->key = val;
        }
    }
    void add(T valChild, T valParent)
    {
        NodeTree<T> *tmp = GetNodeParent(valParent, root);
        if(tmp != 0) {
            NodeTree<T> *n = new NodeTree<T>;
            n->key = valChild;
            n->pChild = 0;
            n->pNext = 0;
            if(tmp->pChild == 0 ) {
                tmp->pChild = n;
            }
            else {
                NodeTree<T> *q = tmp->pChild;
                while (q->pNext != 0)
                {
                    q = q->pNext;
                }
                q->pNext = n;
            }
        }
    }
    List<T> GetNode(T val) {
        NodeTree <T> *tmp = GetNodeParent(val, root);
        List<T> l;
        if(tmp != 0) {
            NodeTree<T> *p = tmp->pChild;
            while (p!=0)
            {
                l.Add(p->key);
                p = p->pNext;
            }
        }
        return l;
    }
};

#endif