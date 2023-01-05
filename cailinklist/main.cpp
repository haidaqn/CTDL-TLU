#include <bits/stdc++.h>
#include "list.h"

using namespace std;

int main() { 

    List<int> l;

    l.Add(3);
    l.Add(1);
    l.Add(5);
    l.Add(9);

    l.Delete(2);

    l.printAll();

    return 0;
}