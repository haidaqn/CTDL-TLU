#include <bits/stdc++.h>
#include "list.h"
using namespace std;

int main() {

    List<int> l;

    for(int i = 1; i<=5; i++)
        l.Add(i);

    l.PrintAll();
    cout<<endl;
    l.Update(3,11);
    cout<<endl;
    l.PrintAll();


    return 0;
}