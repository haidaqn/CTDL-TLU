#include <bits/stdc++.h>
#include "list.h"

using namespace std;


// new là cấp phát vùng nhớ cho 1 con trỏ
// delete là giải phóng vùng nhớ được cấp phát trước đó của con trỏ đó 

int main() { 

    List<int> l;

    l.Add(3);
    l.Add(1);
    l.Add(5);
    l.Add(9);

    l.Update(2, 19);

    l.printAll();

    return 0;
}