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
        List() {
            head = NULL;
        }
        void Add(T value ) {
            Node<T> *p = new Node<T>;
            p->data = value;
            p->next = NULL;
            if(head == NULL) {
                head = p;
            }
            else {
                Node<T> *tmp = head;
                while(tmp -> next != NULL)
                    tmp = tmp->next;
                tmp->next = p;
            }
        }
        void PrintAll() const {
            Node<T> *p = head;
            while(p != NULL) {
                cout << p->data << " ";
                p = p->next;
            }
        }
        T Get(int index) const {
            Node<T> *p = head;
            for (int i = 0; i < index ;++i ){
                p = p->next;
            }
            return p->data;
        }
        void Update (T value, int index) {
            Node<T> *tmp = head;
            for (int i = 0; i < index;i++) 
                tmp = tmp ->next;
            tmp->data = value;
        }
        void Delete (int index) {
           if(index == 0) {
                head = head->next;
           }
           else {
                Node<T> *tmp = head;
                for (int i = 0; i < index - 1; i++)
                {
                    tmp = tmp->next;
                }
                tmp->next = tmp->next->next;
           }
        }
        string find(T value) {
           Node<T> *tmp = head;
           while (tmp != NULL)
           {
                if(tmp->data == value)
                    return "YES";
                tmp = tmp->next;
           }
           return "NO";
        }
        int count() {
           int dem = 0;
           Node<T> *p = head;
           while (p != NULL)
           {
                dem++;
                p = p->next;
           }
           return dem;
        }
        void Insert (int index, T value) {
           Node<T> *tmp = new Node<T>;
           tmp->data = value;
           int dem = count();
           if (index < 0 || index > dem + 1)
                return;
            if(index == 0 ) {
                tmp->next = head;
                return;
            }
            else {
                Node<T> *p = head;
                for (int i = 0; i < index - 1;i++) {
                    p = p->next;
                }
                tmp->next = p->next;
                p ->next= tmp;
            }
        }
};

#endif