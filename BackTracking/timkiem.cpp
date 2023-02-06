#include <bits/stdc++.h>

using namespace std;

bool BinarySearch (int value, int l, int r, int a[]) {
    if(r >= l ) {
        int mid = l + (r - l) / 2;
        if(a[mid] == value)
            return true;
        if (a[mid] > value)
            return BinarySearch(value, l, mid - 1, a);
        return BinarySearch(value, mid + 1, r, a);
    }
    return false;
}

int main() {

    int a[] = { 1, 3, 4, 5, 6, 7, 11, 13 };
    int length = sizeof(a) / sizeof(a[0]);
    sort(a, a + length);
    cout << BinarySearch(3, 0, length, a);

    return 0;
}