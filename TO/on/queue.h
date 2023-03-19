#ifndef queue_h
#define queue_h

#include "node.h"
#include <iostream>

using namespace std;
template <class T>

class Queue{

private:
    Node<T> *head;
    Node<T> *tail;
public:
    Queue() {
        head = 0;
        tail = 0;
    }
    void Add(T value) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->next = 0;
        if(head == 0) {
            head = tmp;
            tail = tmp;
        }
        else {
            tail->next = tmp;
            tail = tmp;
        }
    }
    bool IsEmpty() const {
        return head == 0;
    }
    T pop() {
        Node<T> *tmp = head;
        T value = tmp->data;
        head = head->next;
        delete tmp;
        if(head == 0 )
            tail = 0;
        return value;
    }
};

#endif