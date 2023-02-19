#include <bits/stdc++.h>
#include "stack.h"
#include "queue.h"

using namespace std;

int tinh(char dau, int a, int b ) {
    if(dau == '*')
        return a * b;
    if (dau == '/')
        return a / b;
    if (dau == '+')
        return a + b;
    if (dau == '-')
        return a - b;
    return pow(a, b);
}
int UT(char x) {
    if(x == '^')
        return 3;
    if (x == '*' || x =='/')
        return 2;
    return 1;
}
int KT(char x) {
    if (x == '*' || x == '^' || x == '/' || x == '+' || x == '-')
        return 1;
    if(x == '(' || x ==')')
        return -1;
    return 0;
}


int main() {

    string s;
    getline(cin, s);
    cout << endl;

    Stack<char> x;
    Queue<char> y;

    int i = 0;
    while (i < s.length())
    {
        char token = s[i];
        if(KT(token) == 0)
            y.EnQueue(token);
        else {
            if (KT(token) == 1) {
                while(!x.IsEmpty())
                {   
                    if(KT(x.GetTop()) == 1 && UT(x.GetTop()) >= UT(token))
                        y.EnQueue(x.Pop());
                    else
                        break;
                }
                x.Push(token);
            }else {
                if(token == '(') {
                    x.Push(token);
                }
                else {
                    if (token == ')')
                    {
                        while (!x.IsEmpty())
                        {
                            if (x.GetTop() != '(')
                            {
                                y.EnQueue(x.Pop());
                            }
                            else
                                break;
                        }
                        x.Delete(); // xóa (
                    }
                }
            }
        }
        i++;
    }
    while (!x.IsEmpty())
        y.EnQueue(x.Pop());

    Stack<float> t;
    float kq = 0;
    while (!y.IsEmpty())
    {
        char tmp = y.DeQueue();
        if(KT(tmp) == 0) {
            t.Push(tmp - '0');
        }
        else {
            float num1 = t.Pop();
            float num2 = t.Pop();
            kq = tinh(tmp, num2, num1);
            t.Push(kq);
        }
    }

    cout << kq << endl;

    return 0;
}