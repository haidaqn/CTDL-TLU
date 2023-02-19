
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

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
void Gen(ofstream &file, ll arr[], set<ll> &a, map<ll,int> &b)
{   
    for (ll i = 0; i < 100000; i++)
    {
        arr[i] = ( rand() % 100000 ) ;
        a.insert(arr[i]);
        b[arr[i]]++;
    }
    QuickSort(arr, 0, 100000);
    // Merge(arr,1,100000);

    for (ll i = 0; i < 100000; i++)
    {
        file << arr[i] <<endl;
    }
}
bool BinarySearch(int value, ll l, ll r, ll a[])
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == value)
            return true;
        if (a[mid] > value)
            return BinarySearch(value, l, mid - 1, a);
        return BinarySearch(value, mid + 1, r, a);
    }
    return false;
}
void tim(ofstream &file, ll arr[]) {
    for(auto &se1 : s1) {
        if (BinarySearch(se1, 0, 100000, arr)) {
            file << se1 << endl;
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
    Gen(fout1, arr1, s1, m1);
    Gen(fout2, arr2, s2, m2);

    tim(fout3,arr2);
    
    soLanXH(fout4);
    fout1.close();
    fout2.close();
    fout3.close();
    fout4.close();

    return 0;
}