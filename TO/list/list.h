#ifndef list_h
#define list_h
#include "node.h"
#include <bits/stdc++.h>
using namespace std;
template <class T>

class List{
private:
    Node<T> *head;
public:
    List() {
        head = 0;
    }
    void print() const {
        Node<T> *tmp = head;
        while (tmp != 0)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
    void Add(T value) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->next = 0;
        if(head == 0) {
            head = tmp;
        }
        else {
            Node<T> *p = head;
            while(p->next != 0)
                p = p->next;
            p->next = tmp;
        }
    }
    void Insert(int pos,T val) {
        if(pos == 0)
            head = head->next;
        else {
            Node<T> *p = new Node<T>;
            p->data = val;
            Node<T> *tmp = head;
            for (int i = 0; i < pos - 1;i++)
                tmp = tmp->next;
            p->next = tmp->next;
            tmp->next = p;
        }
    }
    void Delete(int pos) {
        if(pos ==0 ){
            head = head->next;
        }
        else {
            Node<T> *tmp = head;
            for (int i = 0; i < pos - 1;i++) {
                tmp = tmp->next;
            }
            tmp->next = tmp->next->next;
        }
    }


};

#endif

