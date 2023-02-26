#include <bits/stdc++.h>
#include "list.h"

using namespace std;

int main() {

    List<int> ls;

    ls.Add(1);
    ls.Add(5);
    ls.Add(3);
    ls.Add(9);
    ls.Add(11);

    ls.Insert(2, 33);

    ls.Delete(4);

    ls.print();

    return 0;
}