#ifndef stack_h
#define stack_h
#include "node.h"
#include <bits/stdc++.h>

using namespace std;
template <class T>

class Stack {

    private:
        Node<T> *top;
    public:
        Stack() {
            top = 0;
        }
        void add(T value) {
            Node<T> *tmp = new Node<T>;
            tmp->data = value;
            tmp->next = top;
            top = tmp;
        }
        void Print()
        {
            Node<T> *tmp = top;
            while (tmp != 0)
            {
                cout << tmp->data << endl;
                tmp = tmp->next;
            }
        }
};

#endif