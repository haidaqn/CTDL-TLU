#include <bits/stdc++.h>
#include "tree.h"
using namespace std;

int main() {

    Tree<int> l;
    l.add(7);
    l.add(9);
    l.add(3);
    l.add(5);
    l.add(14);
    // l.add(15);
    l.PrintTree();
    cout << endl;
    l.h();
    return 0;
}