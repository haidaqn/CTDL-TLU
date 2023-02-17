// QuickSort ok
// Tạo ra 2 file mảng gồm 100.000 phần tử ngẫu nhiên, viết thuật toán để tìm các phần tử 
// trong file 1 xuất hiện trong file 2, sắp xếp rồi viết ra file 3
// sinh ra 2 mảng 100 phần tử, đếm xem các phần tử nằm trong mảng 1 xuất hiện bao nhiêu lần ở mảng 2
// biểu thức dạng trung tố --> chuyển về biểu thức hậu tố


#include <bits/stdc++.h>

using namespace std;


void Gen(ofstream &file)
{   

    for (int i = 0; i < 100000; i++)
    {
        file << rand() % 100000 << endl;
    }
}

int main() {

    srand(time(0));
    ofstream fout1("text1.text"), fout2("text2.text");

    

    Gen(fout1);
    Gen(fout2);


    fout1.close();
    fout2.close();

    return 0;
}