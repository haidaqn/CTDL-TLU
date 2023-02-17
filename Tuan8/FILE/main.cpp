// Tạo ra 2 file mảng gồm 100.000 phần tử ngẫu nhiên, viết thuật toán để tìm các phần tử 
// trong file 1 xuất hiện trong file 2, sắp xếp rồi viết ra file 3
// sinh ra 2 mảng 100 phần tử, đếm xem các phần tử nằm trong mảng 1 xuất hiện bao nhiêu lần ở mảng 2

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll x = 100000;
ll y = 100;
ll arr1[100000];
ll arr2[100000];
set<ll> s1;
set<ll> s2;
map<ll,int> m1;
map<ll, int> m2;

void QuickSort(ll a[], ll left, ll right)
{
    ll i, j;
    ll x;
    x = a[(left + right) / 2];
    i = left;
    j = right;
    do
    {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i < j);

    if (left < j)
        QuickSort(a, left, j);
    if (right > i)
        QuickSort(a, i, right);
}
void Gen(ofstream &file, ll x, ll arr[], set<ll> &a, map<ll,int> &b)
{   
    for (ll i = 0; i < x; i++)
    {
        arr[i] = rand() % x;
        a.insert(arr[i]);
        if(arr[i] == 0 ) {
            b[0]++;
        }
        else {
            b[arr[i]]++;
        }
    }
    QuickSort(arr, 0, x);
    for (ll i = 0; i < x; i++)
    {
        file << arr[i] <<endl;
    }
}
void tim(ofstream &file) {
    for(auto &se1 : s1) {
        for(auto &se2: s2) {
            if(se1== se2) {
                file << se1 << endl;
                break;
            }
            else if( se2 > se1) {
                break;
            }
        }
    }
}
void soLanXH(ofstream &file1)
{
    for(auto &se1 : s1) {
        file1 << se1 <<"-"<<m2[se1]<<"\n";
    }
}
int main(){

    srand(time(0));
    ofstream fout1("text1.text"), fout2("text2.text"), fout3("text3.text"), fout4("text4.text");

    Gen(fout1, x, arr1, s1, m1);
    Gen(fout2, x, arr2, s2, m2);
    tim(fout3);
    soLanXH(fout4);
    fout1.close();
    fout2.close();
    fout3.close();
    fout4.close();

    return 0;
}