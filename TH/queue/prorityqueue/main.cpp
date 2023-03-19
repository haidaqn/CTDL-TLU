#include <bits/stdc++.h>
#include "queue.h"

using namespace std;

int main() {

    Queue<int> l;

    l.EnQueue(1, 10);
    l.EnQueue(6, 9);
    l.EnQueue(19, 0);
    // l.EnQueue(9, 11);

    l.PrintAll();
    return 0;
}