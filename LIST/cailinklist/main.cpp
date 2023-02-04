#include <bits/stdc++.h>
#include "list.h"

using namespace std;


// new là cấp phát vùng nhớ cho 1 con trỏ
// delete là giải phóng vùng nhớ được cấp phát trước đó của con trỏ đó 

int main() { 

    List<int> l;

    for(long long i = 1; i <= 10; i++) {
        l.Add(i);
    }

    
    l.printAll();

    cout<<endl;


    return 0;
}