#include <bits/stdc++.h>
#include "tree.h"
using namespace std;

int main() {

    Tree<int> l;

    l.add(10);
    l.add(7);
    l.add(11);
    l.add(8);
    l.add(15);
    l.add(3);

    // l.PreOrDer();
    l.chieucao();
    return 0;
}