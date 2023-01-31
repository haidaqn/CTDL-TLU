#include <bits/stdc++.h>
#include "list.h"

using namespace std;


int main()
{

    List<int> l;

    for (int i = 1; i <= 10;i++)
    {
        l.Add(i);
    }
    l.PrintAll();
    l.Insert(3, 12);
    cout << endl;
    l.PrintAll();

    return 0;

}