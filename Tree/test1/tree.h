#ifndef tree_h
#define tree_h
#include "node.h"
#include <bits/stdc++.h>
using namespace std;
template<class T>

class Tree{

private:
    Node<T> *root;
    void AddToVal(Node<T> *&r, T val){
        Node<T> *tmp = new Node<T>;
        tmp->key = val;
        tmp->pLeft = 0;
        tmp->pRight = 0;
        if(r == 0 ) {
            r = tmp;
        }
        if(r->key == val)
            return;
        if(r->key < val)
            AddToVal(r->pRight, val);
        if(r->key > val)
            AddToVal(r->pLeft, val);
    }
    bool Search(Node<T> *r, T val) {
        if(r->key == val)
            return true;
        if(r->key > val)
            Search(r->pLeft, val);
        if(r->key < val)
            Search(r->pRight, val);
        return false;
    }
    void Print(Node<T> *r) {
        if(r!= 0) {
            cout << r->key << " ";
            Print(r->pLeft);
            Print(r->pRight);
        }
    }
    int chieucao(Node<T> *r)
    {
        /* if (r == nullptr || (r->pLeft == nullptr && r->pRight == nullptr))
            return 0; */
        if (r != 0)
        {
            int m1 = chieucao(r->pLeft);
            int m2 = chieucao(r->pRight);
            return 1 + max(m1, m2);
        }
        return 0;
    }

public:
    Tree() {
        root = 0;
    }
    void add(T val){
        AddToVal(root,val);
    }
    void search(T val) {
        cout << Search(val) << endl;
    }
    void PrintTree() {
        Print(root);
    }
    void h () {
        cout<<chieucao(root)<<endl;
    }

};

#endif