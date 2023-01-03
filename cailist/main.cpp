#include <bits/stdc++.h>
#include "list.h"
using namespace std;

int main(){

    List<int> ds, ds1;
    for(int i = 1; i < 9 ; i++) {
        ds.Add(i);
    }
    for (int i = 2; i <= 10; i+=2){
        ds1.Add(i);
    }

    ds.PrintAll();
    ds1.PrintAll();


    List<int> chua =  ds1;


    chua.PrintAll();


    return 0;    
} 