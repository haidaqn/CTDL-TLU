#include <bits/stdc++.h>
#include "stack.h"
#include "queue.h"

using namespace std;

// Kiem tra phan tu la toan tu, toan hang hay dau ngoac
int KiemTraPhanTu(char Token)
{
    if (Token == '+' || Token == '-' || Token == '*' || Token == '/' || Token == '^')
        return 1;
    else
    {
        if (Token == '(' || Token == ')')
            return -1;
        else
            return 0;
    }
}
// Do uu tien toan tu
int DoUuTien(char o)
{
    if (o == '^')
        return 3;
    if (o == '*' || o == '/')
        return 2;
    // if (o == '+' || o == '-')
    return 1;
}
float Tinh(char dau, float a, float b)
{
    if (dau == '+')
        return a + b;
    if (dau == '-')
        return a - b;
    if (dau == '*')
        return a * b;
    if (dau == '/')
        return a / b;
    if (dau == '^')
        ;
    return pow(a, b);
}
int main() {


    // Ký pháp ba lan ngược
    string bieuThuc;
    getline(cin, bieuThuc);

    Stack<char> x;
    Queue<char> y;

    float kq = 0;

    int i = 0;
    while (i < bieuThuc.length())
    {
        // char Token = bieuThuc[i];
        // cout << "\nToken = "<<Token<<"\n";
        if (KiemTraPhanTu(Token) == 0)
            y.EnQueue(Token);
        else
        {
            if (KiemTraPhanTu(Token) == 1)
            {
                while (!x.IsEmpty())
                {
                    if (KiemTraPhanTu(x.GetTop()) == 1 && DoUuTien(x.GetTop()) >= DoUuTien(Token))
                    {
                        y.EnQueue(x.Pop());
                    }
                    else
                        break;
                }
                x.Push(Token);
            }
            else
            {
                if (Token == '(')
                    x.Push(Token);
                else
                {
                    if (Token == ')' )
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
                        x.Delete();
                    }
                }
            }
        }
        i++;
    }

    while (!x.IsEmpty())
        y.EnQueue(x.Pop());

    Stack<float> u;

    while(!y.IsEmpty()){
        char tmp = y.DeQueue();
        cout << "  " << tmp;
        if (KiemTraPhanTu(tmp) == 0) {
            u.Push(tmp - '0');
        }
        else {
            float num1 = u.Pop();
            float num2 = u.Pop();
            kq = Tinh(tmp, num2, num1);
            u.Push(kq);
        }
    }

    printf("\n");
    cout << "\nKet qua la: " << kq;
 

    return 0;
}