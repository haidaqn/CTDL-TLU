#ifndef queue_h
#define queue_h
#include "node.h"
#include <bits/stdc++.h>
using namespace std;
template <class T>

class Queue {
private :
    Node<T> *left;
    Node<T> *right;
public:
    Queue() {
        left = 0;
        right = 0;
    }
    void EnQueue(T value) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->next = 0;
        if(left == 0) {
            left = tmp;
            right = tmp;
        }else {
            right->next = tmp;
            right = tmp;
        }
    }
    T DeQueue()
    {
        T value = left->data;
        Node<T> *tmp = left;
        left = left->next;
        delete tmp;
        if (left == 0)
            right = 0;
        return value;
    }
    void Print() {
        Node<T> *tmp = left;
        while (tmp!= 0) 
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
        
    }

};

#endif