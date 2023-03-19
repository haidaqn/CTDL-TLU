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
    l.Add(0);

    l.PrintAll();

    return 0;

}