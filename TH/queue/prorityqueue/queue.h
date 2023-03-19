#include "node.h"
#ifndef queue_h
#define queue_h
#include <bits/stdc++.h>
using namespace std;

template <class T>

class Queue
{

private:
    Node<T> *f;
    Node<T> *r;

public:
    Queue()
    {
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
    T GetLast()
    {
        return r->data;
    }
    void EnQueue(T value, int p)
    {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->priority = p;
        tmp->next = NULL;
        if (f == NULL && r == NULL)
        {
            f = tmp;
            r = tmp;
            return;
        }
        if(f->priority > p ) {
            tmp->next = f;
            f = tmp;
            return;
        }
        else {
            Node<T> *n = f;
            while(n->next->priority < p && n->next != NULL)
            {
                n = n->next;
            }
            if( n->next == NULL ) {
                n->next = tmp;
                return;
            }
            tmp->next = n->next;
            n->next =tmp;
        }
    }
    T DeQueue()
    {
        if(IsEmpty())
            return 0;
        T value = f->data;
        Node<T> *tmp = f;
        f = f->next;
        delete tmp;
        if (f == 0)
            r = 0;
        return value;
    }
    void PrintAll() const {
        Node<T> *tmp = f;
        while (tmp != 0)
        {
            cout << "data :" << tmp->data << " trong so " << tmp->priority << endl;
            tmp = tmp->next;
        }
        
    }

};

#endif