#ifndef tree_h
#define tree_h
#include "node.h"
#include <bits/stdc++.h>

using namespace std;
template<class T>

class Tree{
    private:
        Node<T> *root;
        void AddtoVal(T val, Node<T> *&r) {
            Node<T> *tmp = new Node<T>;
            tmp->key = val;
            tmp->left = 0;
            tmp->right = 0;
            if(r ==0 )
                r = tmp;
            if(r->key == val)
                return;
            if(r->key < val)
                AddtoVal(val, r->right);
            if(r->key > val)
                AddtoVal(val, r->left);
        }
        bool Search(Node<T> *r, T val)
        {
            if (r == 0)
                return false;
            if (r->key == val)
                return true;
            if (val < r->key)
                return Search(r->left, val);
            else
                return Search(r->right, val);
        }
        void pre(Node<T> *r) {
            if(r!= 0 ) {
                cout << r->key << endl;
                pre(r->left);
                pre(r->right);
            }
        }
        int cc(Node<T> *r) {
            if(r!= 0 ) {
                int l = cc(r->left);
                int m = cc(r->right);
                return 1 + max(l, m);
            }
            return 0;
        }

    public : 
        Tree(){
            root = 0;
        }

        void add(T val) {
            AddtoVal(val, root);
        }
        void search(T val) {
            cout << Search(root,val) << endl;
        }
        
        void PreOrDer() {
            pre(root);
        }

        void chieucao() {
            cout << cc(root) << endl;
        }
};

#endif