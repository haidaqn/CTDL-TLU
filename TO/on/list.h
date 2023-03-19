#ifndef list_h
#define list_h

#include "node.h"
#include <iostream>

using namespace std;

template <class T>

class List {

private:
    Node<T> *head;

public:
    List() {
        head = 0;
    }
    void Add(T value) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->next = 0;
        if(head == 0)
            head = tmp;
        else {
            Node<T> *p = head;
            while(p->next != 0)
                p = p->next;
            p->next = tmp;
        }
    }
    void Delete(int pos) {
        if(pos == 0) {
            Node<T> *tmp = head;
            head = head->next;
            delete tmp;
        }
        else {
            Node<T> *tmp = head;
            for (int i = 0; i < pos - 1;i++) {
                tmp = tmp->next;
            }
            Node<T> *p = tmp->next;
            tmp->next = p->next;
            delete p;
        }
    }
    void Insert(int pos, T value) {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        if(pos ==0 ) {
            tmp->next = head;
            head = tmp;
        }
        else {
            Node<T> *p = head;
            for (int i = 0; i < pos - 1;i++) {
                p = p->next;
            }
            Node<T> *q = p->next;
            tmp->next = q->next;
            p->next = tmp;
            delete q;
        }
    }
    void PrintAll() const {
        Node<T> *tmp = head;
        while  (tmp != 0 ) {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

#endif