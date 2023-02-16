#include <bits/stdc++.h>

using namespace std;

void PrintAll(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void NoiBot(int n, int arr[])
{
    for (int i = 0; i < n - 1;i++) {
        for (int j = i + 1; j < n;j++){
            if(arr[j] < arr[i]) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

void InsertionSort(int n, int arr[]) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// nhanh tron

void Merge(int a[], int s, int f)
{
    int m = (s + f) / 2;
    int *b = new int[f - s + 1];
    int l = s, r = m + 1;
    int ib = 0;
    while (l <= m && r <= f)
    {
        if (a[l - 1] <= a[r - 1])
        {
            b[ib++] = a[l - 1];
            l++;
        }
        else
        {
            b[ib++] = a[r - 1];
            r++;
        }
    }
    if (l <= m)
    {
        for (int i = l; i <= m; i++)
            b[ib++] = a[i - 1];
    }
    else if (r <= f)
    {
        for (int i = r; i <= f; i++)
            b[ib++] = a[i - 1];
    }
    for (int i = 0; i < ib; i++)
    {
        a[s - 1 + i] = b[i];
    }
}
void MergeSort(int a[], int s, int f)
{
    if (s < f)
    {
        int m = (s + f) / 2;
        MergeSort(a, s, m);
        MergeSort(a, m + 1, f);
        Merge(a, s, f);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // SelectionSort(n, arr);
    // InsertionSort(n, arr);
    PrintAll(n, arr);

    return 0;
}