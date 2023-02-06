#include <bits/stdc++.h>

using namespace std;

void print(int n, char x[]){
    for (int i = 0; i < n; i++)
        cout << x[i]<<" ";
    cout << endl;
}

void Sinh(char a[], char x[], bool flag[],int n, int k, int z) {
    for (int i = 0; i < n;i++) {
        // if(flag[i]) {
            x[z-1] = a[i];
            // flag[i] = 0;
            if(z == k) {
                print(k, x);
            }
            else {
                Sinh(a, x, flag, n, k, z + 1);
            }
            // flag[i] = 1;
        // }
    }
}

int main() {    

    char a[] = {'A', 'B', 'C', 'D', 'E'};
    char x[4];
    bool flag[4];
    fill_n(flag, 4, true);
    Sinh(a, x, flag, 4, 2, 1);
    return 0;
}