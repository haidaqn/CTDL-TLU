#include <bits/stdc++.h>
#include "queue.h"

using namespace std;

int main() {

    Queue<int> l;

    for (int i = 1; i <= 5;i++) {
        l.EnQueue(i);
    }

    cout << l.DeQueue() << endl;
    cout << l.GetFirst() << endl;
    cout << l.GetLast() << endl;

    return 0;
}