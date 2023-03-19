#ifndef queue_h
#define queue_h
#define Max 100
#include <bits/stdc++.h>
using namespace std;
template <class T >

class Queue {
    private :
        T a[Max];
        int f, r;
    public:
        Queue() {
            f = r = 0;
        }
        bool IsEmpty () const {
            return f == r;
        }

        bool IsFullQueue() const {
            return f == (Max - 1);
        }
        
        void EnQueue (T value) {
            if(IsFullQueue()) {
                return;
            }
            a[r] = value;
            r++;
        }

        T DeQueue () {
            if(IsEmpty()) {
                return 0;
            }
            else {
                T value = a[f];
                f++;
                return value;
            } 
        }

        T GetQueue () {
            if(IsEmpty())
                return 0;
            return a[f];
        }
};

#endif