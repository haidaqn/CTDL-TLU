#include <iostream>

using namespace std;

void print(int n, int a[]) {
    for (int i = 0; i < n;i++)
        cout << a[i];
    cout << endl;
}

void Sinh(int i,int n,git pull origin int a[]) {
    if(i > n ) {
        print(n, a);
    }
    else {
        a[i - 1] = 0;
        Sinh(i + 1, n, a);
        a[i - 1] = 1;
        Sinh(i + 1, n, a);
    }
}

void HoanVi(int i, int n,int a[], bool flag[]) {
    for (int j = 1; j <= n;j++) {
        if(flag[j]){
            a[i-1] = j;
            flag[j] = false;
            if(i == n) {
                print(n, a);
            }
            else {
                HoanVi(i + 1, n, a, flag);
            }
            flag[j] = true;
        }
    }
}

int main() {
    int a[100];
    bool flag[100];
    fill_n(flag, 100, 1);
    Sinh(1, 3, a);
    cout << endl;
    // HoanVi(1, 3, a, flag);

    return 0;
}