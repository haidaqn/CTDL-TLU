#include "node.h"
#ifndef list_h
#define list_h
#include <bits/stdc++.h>
using namespace std;

template <class T> 

class List {

    private :
        Node<T> *head;
    public:
        List () {
            head = 0;
        }
        void Add(T value) {
            Node<T> *tmp = new Node<T>;
            tmp->data = value;
            tmp->next = NULL;
            if(head == NULL ) {
                head = tmp;
            }
            else {
                Node<T> * p = head;
                while (p->next != NULL)
                    p = p->next;
                p->next = tmp;  
            }
        }
        void PrintAll() const {
            Node<T> * tmp = head;
            while(tmp != NULL) {
                cout<<tmp->data<<" ";
                tmp = tmp->next;
            }
        }
        T Get(int index) const {
            Node<T> *tmp =head;
            for(int i = 0;i< index;i++)
                tmp = tmp ->next;
            return tmp->data;
        }
        void Update(int index, T value) {
            Node<T> *tmp = head;
            for(int i = 0;i< index;i++) 
                tmp = tmp->next;
            tmp->data = value;
        }
        void Delete(int index) {
            if(index ==0 ) {
                head = head->next;
            }
            else {
                Node<T> *tmp = head;
                for(int i = 0; i< index -1 ;i++)
                    tmp = tmp->next;
                tmp->next= tmp->next->next;
            }
        }
        void Insert(int index, T value) {
            Node<T> *tmp = new Node<T>;
            tmp->data = value;
            if(index == 0 ) {
                tmp->next = head;
            }
            else {
                Node<T> *p = head;
                for(int i = 0;i<index-1;i++)
                    p = p->next;
                tmp->next = p->next;
                p->next = tmp;
            }
        }
};

#endif