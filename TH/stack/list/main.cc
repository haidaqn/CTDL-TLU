#include <bits/stdc++.h>
#include "stack.h"

using namespace std;

int main()
{ // Last in first out

    Stack<int> l;

    for(int i = 1; i <= 5;i++){
        l.Push(i);
    }
    l.Push(11);

    cout << l.Pop() << endl;
    cout << l.GetTop();
    return 0;
}