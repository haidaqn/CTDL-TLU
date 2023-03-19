#include <bits/stdc++.h>
#include "stack.h"
using namespace std;


int main () {

    Stack<int> l;

    for (int i = 1; i <= 5; i++){
        l.Push(i);
    };

    cout << l.Pop();

    cout << endl;
    cout << l.GetTop();

    return 0;
}   