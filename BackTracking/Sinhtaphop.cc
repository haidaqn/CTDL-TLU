#include <bits/stdc++.h>

using namespace std;

void print(int n, char x[]){
    for (int i = 0; i < n; i++)
        cout << x[i]<<" ";
    cout << endl;
}

void Sinh(char a[], char x[],int n, int k, int z) {
    for (int i = 0; i < n;i++) {
            x[z] = a[i];
            if(z == k) {
                print(k, x);
            }
            else {
                Sinh(a, x, n, k, z + 1);
            }
    }
}

int main() {    

    char a[] = {'A', 'B', 'C', 'D', 'E'};
    char x[4];
    Sinh(a, x, 5, 2, 0);
    return 0;
}