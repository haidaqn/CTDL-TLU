#include <bits/stdc++.h>
#include "list.h"

using namespace std;

int main(){

    List<int> ds;
    for(int i = 1; i < 6 ; i++) {
        ds.Add(i);
    }
    ds.Add(3);
    ds.Add(3);
    ds.Add(3);
    ds.Add(3);
    ds.Add(3);
    // ds.Insert(0,100);

    cout<<ds.Find(3)<<endl;

    // ds.Reverse();

    cout<<ds.CountByValue(3);

    // ds.PrintAll();

    cout<<endl;

    

    // ds.PrintFromTo(3,6);


    return 0;    
} 