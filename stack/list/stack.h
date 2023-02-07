#include "node.h"
#ifndef stack_h
#define stack_h
#include <bits/stdc++.h>
using namespace std;

template <class T>

class Stack {

    private :
        Node<T> *top;
    public:
        Stack() {
            top = 0;
        }
        void Push (T value) {
            Node<T> *tmp = new Node<T>;
            tmp->data = value;
            tmp->next = top;
            top = tmp;
        };
        bool IsEmpty () const {
            return top == 0;
        }
        T GetTop() const {
            return top->data;
        }
        T Pop () {
            if(IsEmpty() == 1) {
                return 0;
            }
            Node<T> *p = top;
            T value = p->data;
            top = top ->next;
            delete p;
            return value;
        }
};
#endif