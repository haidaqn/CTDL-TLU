#ifndef stack_h
#define stack_h

#include "node.h"
#include <iostream>
using namespace std;
template<class T>

class Stack {
private:
    Node<T> *top;
public:
    Stack() {
        top = 0;
    }
    void add(T value ) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->next = top;
        top = tmp;
    }
    bool IsEmpty() const {
        return top == 0;
    }
    T GetTop () const {
        return top->data;
    }
    T pop() {
        Node<T> *tmp = top;
        T value = tmp->data;
        top = top->next;
        delete tmp;
        return value;
    }
};

#endif