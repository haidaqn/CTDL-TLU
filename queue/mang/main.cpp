#include <bits/stdc++.h>
#include "queue.h"
using namespace std;

int main() {

    Queue<int> r;

    for (int i = 1; i <= 5;i++)
        r.EnQueue(i);


    cout<<r.DeQueue()<<endl;
    cout << r.GetQueue() << endl;

    return 0;
}