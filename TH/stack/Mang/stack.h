#ifndef stack_h
#define stack_h
#include <bits/stdc++.h>
using namespace std;
template <class T >

class Stack {

    private :
        T a[100];
        int top;
    public :
        Stack(){
            top = 0;
        };
        void Push(T value) {
            a[top] = value;
            top++;
        };

        T GetTop() const
        {
            return a[top - 1];
        };

        T Pop () {
            return a[--top];
        };

        bool IsEmpty() const  {
            return top == 0;
        };
};
#endif