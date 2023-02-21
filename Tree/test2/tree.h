#ifndef tree_h
#define tree_h
#include "node.h"
#include <bits/stdc++.h>
using namespace std;

template<class T>

class Tree{

private:
    Node<T> *root;
    void Add(Node<T> *&r, T val) {
        Node<T> *tmp = new Node<T>;
        tmp->key = val;
        tmp->pLeft = 0;
        tmp->pRight = 0;
        if(r == 0 )
            r = tmp;
        if(r->key== val)
            return;
        if(r->key > val)
            Add(r->pLeft, val);
        if (r->key < val)
            Add(r->pRight, val);
    }
    void PrintTree(Node<T> *r) {
        if(r!= 0) {
            cout << r->key << "  ";
            PrintTree(r->pLeft);
            PrintTree(r->pRight);
        }
    }
    bool Search(T val, Node<T> *r) {
        if(r ==0 )
            return 0;
        if(r->key == val)
            return 1;
        if(r->key > val)
            Search(r->pLeft, val);
        if(r->key < val)
            Search(r->pRight, val);
        return 0;
    }
    int chieucao(Node<T> *r){
        if(r!= 0) {
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
    void add(T value){
        Add(root, value);
    }
    void Print() {
        PrintTree(root);
    }
    void search(T val) {
        cout << Search(val) << endl;
    }
    void h () {
        cout << chieucao(root) << endl;
    }

};


#endif