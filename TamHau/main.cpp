#include <bits/stdc++.h>

using namespace std;

int i = 0;

void Print(int n, char bc[][20]) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << bc[i][j] << "  ";
        cout << "\n";
    }
}

void chuanHoa(int n, char bc[][20])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            bc[i][j] = '-';
}

bool XepDuoc(int d, int c, int N, char bc[][20])
{
    for (int x = 0; x < c; x++)
        if (bc[d][x] == 'H')
            return false;
    for (int x = d - 1, y = c - 1; x >= 0 && y >= 0; x--, y--)
        if (bc[x][y] == 'H')
            return false;
    for (int x = d + 1, y = c - 1; x < N && y >= 0; x++, y--)
        if (bc[x][y] == 'H')
            return false;
    return true;
}

void XepHau(int c, int N, char bc[][20])
{
    if (c == N)
    {
        Print(N, bc);
        cout << "********************\n";
        i++;
    }
    else
    {
        for (int d = 0; d < N; d++)
        {
            if (XepDuoc(d, c, N, bc))
            {
                bc[d][c] = 'H';
                XepHau(c + 1, N, bc);
                bc[d][c] = '-';
            }
        }
    }
}

int main() {

    int n = 8;
    char bc[20][20];

    chuanHoa(n, bc);
    XepHau(0, n, bc);
    cout << i << endl;

    return 0;
}