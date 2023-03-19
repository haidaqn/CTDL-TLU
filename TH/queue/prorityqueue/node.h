#ifndef node_h
#define node_H

template <class T>

struct Node
{
    T data;
    int priority;
    Node<T> *next;
};


#endif