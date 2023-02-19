#include <bits/stdc++.h>

using namespace std;

void Merge(int arr[], int s, int l)
{
    int m = (s + l) / 2;
    int *b = new int[l - s + 1];
    int x = s, r = m + 1;
    int ib = 0;
    while (x <= m && r <= l)
    {
        if(arr[x-1] <= arr[r-1]) {
            b[ib++] = arr[x - 1];
            x++;
        }else {
            b[ib++] = arr[r - 1];
            r++;
        }
    }
    if(x <= m) {
        for (int i = x; i <= m;i++)
            b[ib++] = arr[i-1];
    }
    else if (r <= l)
    {
        for (int i = r; i <= l; i++)
            b[ib++] = arr[i-1];
    }
    for (int i = 0; i < ib;i++) {
        arr[s - 1 + i] = b[i];
    }
}
void PrintAll(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void MergeSort(int arr[], int s, int l) {
    if(s < l) {
        int m = (s + l) / 2;
        MergeSort(arr, s, m);
        MergeSort(arr, m+1, l);
        Merge(arr, s, l);
    }
}

void QuickSort(int arr[], int l, int r) {
    int x = arr[(l + r) / 2];
    int i = l, j = r;
    do
    {
        while (arr[i] < x)
        {
            i++;
        }
        while (arr[j] > x)
        {
            j--;
        }
        if(i<= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i< j);

    if(l < j)
        QuickSort(arr, l, j);
    if(i < r) {
        QuickSort(arr, i, r);
    }
}

int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // MergeSort(arr,1,n);
    QuickSort(arr, 0, n -1);

    PrintAll(n, arr);
    return 0;
}