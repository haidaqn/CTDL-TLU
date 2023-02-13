#include <bits/stdc++.h>

using namespace std;

void THN(int N, string c1, string c2, string c3)
{
    if (N == 1)
    {
        cout  << ": " << c1 << " --> " << c3 << endl;
    }
    else
    {
        THN(N - 1, c1, c3, c2);
        THN(1, c1, c2, c3);
        THN(N - 1, c2, c1, c3);
    }
}

int main() {

    THN(4, "Coc 1", "Coc 2", "Coc 3");

    return 0;
}