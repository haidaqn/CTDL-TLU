#include <iostream>
#include "tree.h"

using namespace std;

int main() {
    Tree<int> q;

    q.ADD(8);
    q.ADD(5);
    q.ADD(9);
    q.ADD(10);
    q.ADD(2);

    // q.Search(1);
    q.Height();

    return 0;
}