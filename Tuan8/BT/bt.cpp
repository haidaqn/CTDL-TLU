#include <bits/stdc++.h>
#include "stack.h"
#include "queue.h"

using namespace std;

// Kiem tra phan tu la toan tu, toan hang hay dau ngoac
int KiemTraPhanTu(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
        return 1;
    else
    {
        if (x == '(' || x == ')')
            return -1;
        else
            return 0;
    }
}
// Do uu tien toan tu
int DoUuTien(char x)
{
    if (x == '^')
        return 3;
    if (x == '*' || x == '/')
        return 2;
    // if (x == '+' || x == '-')
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
    return pow(a, b);
}
int main() {
    // Ký pháp ba lan ngược

    string bieuThuc;
    getline(cin, bieuThuc);
    cout << endl;
    Stack<char> x;
    Queue<char> y;

    float kq = 0;

    int i = 0;
    while (i < bieuThuc.length())
    {
        char Token = bieuThuc[i];
        // nếu token là toán hạng
        if (KiemTraPhanTu(Token) == 0)
            y.EnQueue(Token);
        else
        {   
            // nếu là toán tử
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
            // nếu là ( or )
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
    
    // hết chuỗi thì push stack sang queue
    while (!x.IsEmpty())
        y.EnQueue(x.Pop());

    Stack<float> u;
    //  fifo
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

    cout << "\n\nKet qua la: " << kq << endl;


    return 0;
}