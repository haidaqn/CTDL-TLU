#include <bits/stdc++.h>
#include "queue.h"

using namespace std;

int main() {
    Queue<int> q;

    q.EnQueue(3);
    q.EnQueue(5);
    q.EnQueue(9);
    q.EnQueue(11);
    q.EnQueue(0);

    q.Print();
    
    return 0;
}