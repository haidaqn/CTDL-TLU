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
    int key, j;
    for (int i = 1; i < n; i++)
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
void QuickSort(int a[], int left, int right)
{
    int i, j;
    int x;
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

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // SelectionSort(n, arr);
    // InsertionSort(n, arr);

    // MergeSort(arr,1,5);

    QuickSort(arr, 0, n);

    PrintAll(n, arr);

    return 0;
}