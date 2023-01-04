#include "node.h"
#ifndef list_h
#define list_h
#include <bits/stdc++.h>
using namespace std;
template<class T>

class List {
    private :
        Node<T> *head;
    public:
        List () {
            head = 0;
        }
        void Add(T x) {
            Node<T> * tmp = new Node<T>;
            tmp->data = x;
            tmp->next = NULL;
            if(head == NULL) {
                head = tmp;
            }
            else {
                Node<T> * p = head;
                while ( p->next != NULL)
                    p = p->next;
                p->next = tmp;                
            }
        }

        T get(int pos) const { 
            Node<T> * p = head;
            for(int i = 0; i<pos; i++)
            p = p->next;
            return p->data;
        }

        void printAll () const {
            Node<T> *h = head;
            while (h != NULL)
            {
                cout<<h->data<<"; ";
                h = h->next;
            }
        }
};

#endif