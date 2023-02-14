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

//chon
void SelectionSort(int n, int arr[])
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

//chen
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


int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // SelectionSort(n, arr);
    // InsertionSort(n, arr);
    PrintAll(n, arr);

    return 0;
}