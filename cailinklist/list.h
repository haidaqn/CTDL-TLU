#include "node.h"
#ifndef list_h
#define list_h
#include <bits/stdc++.h>
using namespace std;
template<class T>

class List {
    private :
        Node<T> *head;
        Node<T> *tail;
    public:
        List () {
            head = 0;
            tail = 0;
        }

        void Add(T x) {
            Node<T> * tmp = new Node<T>;
            tmp->data = x;
            tmp->next = NULL;
            if(head == NULL) {
                head = tmp;
                tail = tmp;
            }
            else {
               tail->next = tmp;               
               tail = tmp;
            }
        }

        int count() const {
            int dem = 0;
            Node<T> *p = head;
            while ( p != NULL)
            {
                dem++;
                p = p->next;
            }
            
            return dem;
        }

        T get(int pos) const { 
            Node<T> * p = head;
            for(int i = 0; i<pos; i++)
                p = p->next;
            return p->data;
        }

        void pushFront(T x)
        {
            Node<T> *newNode = new Node<T>;
            newNode->data = x;
            newNode->next = head;
            head = newNode;
        }

        void printAll () const {
            Node<T> *h = head;
            while (h != NULL)
            {
                cout<<h->data<<" ";
                h = h->next;
            }
        }

        int CountByValue(T value) const {
            int dem = 0;
            Node<T> *p = head;
            while ( p != NULL)
            {
                if(p->data == value)
                    dem++;
                p = p->next;
            }
            return dem;
        }

        string find(T x) const {
            Node<T> *tmp = head;
            while( tmp != NULL) {
                if(tmp->data == x)
                    return "Yes";
                tmp = tmp->next;
            }
            return "No";
        }

        void Insert(int pos, T value)
        {
            Node<T> *newNode = new Node<T>;
            newNode->data = value;
            int n = count();
            if( pos < 1 || pos > n + 1)
                return;
            if( pos == 1 ) {
                pushFront(value);
                return;
            }
            Node<T> *tmp = head;
            for (int i = 1; i <= pos - 2; i++)
                tmp = tmp->next;
            newNode->next = tmp->next;
            tmp->next = newNode;
        }


       /*  void getTail () {
            cout<<tail->data<<endl;
        } */

        /* void getNodeAtIndex(int pos, Node<T> **tail) {
            if( pos < 0 || pos >= count() + 1) {
                return ;
            }
            if (pos > 0 && pos <= count() ) {
                Node<T> * tmp = head;
                for(int i = 0; i <= pos ; i++) 
                    tmp = tmp->next;
                tmp->next = NULL;
                *tail = tmp;
            }
        } */

        /* void Delete(int pos) {
            if (pos == 0)
                head = head->next;
            if(pos > 0 && pos < count())
            {
                Node<T> *p = head;
                for (int i = 1; i <= pos - 1; i++)
                    p = p->next;
                p->next = p->next->next;
            }
            if (pos = count() - 1) {
                getNodeAtIndex(pos - 2,  &tail);
            }
        } */

        void Delete(int pos) {
            if (pos == 0){
                head = head->next;
            if (head == 0)
                tail = 0;
		    }
            else
            {
                Node<T> *p = head;
                for(int i = 0; i < pos -1; i++)
                    p=p->next;
                p->next = p->next->next;
                if (p->next == 0)
                    tail = p;
            }		
	    };

        void Update( int pos, T value)
        {
            Node<T> *p = head;
            for (int i = 1; i < pos; i++)
            {
                p = p->next;
            }
            p->data = value;
        }
};

#endif