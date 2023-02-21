#ifndef list_H
#define list_H
#include "node.h"
#include <bits/stdc++.h>
using namespace std;

template <class T>

class List
{
private:
    Node<T> *head;

public:
    List()
    {
        head = 0;
    }
    void Add(T value)
    {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        tmp->next = 0;
        if (head == 0)
        {
            head = tmp;
        }
        else
        {
            Node<T> *n = head;
            while (n->next)
                n = n->next;
            n->next = tmp;
        }
    }
    void PrintAll() const
    {
        Node<T> *tmp = head;
        int i = 0;
        while (tmp != 0)
        {
            cout << ++i << " " << tmp->data << "\n";
            tmp = tmp->next;
        }
        cout << "toi da o day" << endl;
    }
    void Delete(int pos)
    {
        if (pos == 0)
        {
            head = head->next;
        }
        else
        {
            Node<T> *tmp = head;
            for (int i = 0; i < pos - 1; i++)
                tmp = tmp->next;
            tmp->next = tmp->next->next;
        }
    }
    T Get(int pos)
    {
        Node<T> *tmp = head;
        for (int i = 0; i < pos; i++)
            tmp = tmp->next;
        return tmp->data;
    }
    void Insert(int pos, T value)
    {
        Node<T> *tmp = new Node<T>;
        tmp->data = value;
        if (pos == 0)
        {
            tmp->next = head;
            head = tmp;
        }
        else
        {
            Node<T> *m = head;
            for (int i = 0; i < pos - 1; i++)
                m = m->next;
            tmp->next = m->next;
            m->next = tmp;
        }
    }
};

#endif