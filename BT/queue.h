#include "node.h"
#ifndef queue_h
#define queue_h
#include <bits/stdc++.h>
using namespace std;

template <class T >

class Queue{

    private:
        Node<T> *f;
        Node<T> *r;
    public:
        Queue() {
            f = r = 0;
        }
        bool IsEmpty() const
        {
            return f == NULL;
        }
        T GetFirst() const
        {
            return f->data;
        }
        T GetLast() {
            return r->data;
        }
        void EnQueue(T value)
        {
            Node<T> *tmp = new Node<T>;
            tmp->data = value;
            tmp->next = NULL;
            if(f == NULL) {
                f = tmp;
                r = tmp;
            }
            else {
                r->next = tmp;
                r = tmp;
            }
        }
        T DeQueue()
        {
            T value = f->data;
            Node<T> *tmp = f;
            f = f->next;
            delete tmp;
            if(f == 0)
                r = 0;
            return value;
        }

        void PrintAll() const {
            Node<T> *tmp = f;
            while (tmp != NULL)
            {
                cout << tmp->data << "  ";
                tmp = tmp->next;
            }
        }

};

#endif