#ifndef list_h
#define list_h

#include <bits/stdc++.h>

using namespace std;

template <class T>
class List {
    private:
        T a[1000];
        int N;
    public:
        List(){
            N = 0;
        }

        List(int n, int value){
            for(int i = 0 ; i < n ; i++) {
                a[i] = value;
            }
            N = n;
        }
        void Add(T t){
            a[N++] = t;
        }
        T Get(int pos) const{
            return a[pos];
        }
        int Count() const{
            return N;
        }

        void Delete(int pos){
            for(int i = pos-1; i<N-1; i++)
                a[i] = a[i+1];
            N--;
        }

        void PrintFromTo (int from, int to ) const {
            for(int i = from; i <= to ; i++) {
                cout<<a[i]<<" ";
            }
            cout << endl;
        }

        void Insert (int pos, T value) {
            for(int i = N - 1 ; i > pos - 1 ; i--) {
                a[i+1] = a[i];
            }
            a[pos] = value;
            N++;
        }

        void PrintAll () const {
            for(int i = 0 ; i < N; i++) {
                cout<<a[i] << " ";
            }
            cout << endl;
        }

        void Reverse() {
            for(int i = 0; i < N/2; i++) {
                int temp = a[i];
                a[i] = a[N-i-1];
                a[N-i-1] = temp;
            }
        }

        string Find(int value) {
            for(int i = 0; i < N ; i++) {
                if(a[i] == value) 
                    return "true";
            }
            return "false";
        }

        int CountByValue(int value) const {
            int dem = 0;
            for(int i = 0; i < N ; i++) {
                if(a[i] == value) 
                    ++dem;
            }

            return dem;
        }

        bool checkArray(List<T> a, T x)
        {
            for (int i = 0; i < a.Count();i++)
                if(x == a[i])
                    return true;
            return false;
        }

        // gán
        List operator = (List a) {
            List<T> assign;
            for (int i = 0; i < N; i++) {
                assign.Add(a[i]);
            }
            return assign;
        }


};

#endif