#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    string a[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "A", "J", "Q", "K"};
    char b[4] = {char(3), char(4), char(5), char(6)};
    int rd1, rd2;
    map<string, int> mp;
    int count = 0;  // endl

    while (1)
    {
        rd1 = rand() % 13;
        rd2 = rand() % 4;

        string s2(1, b[rd2]);
        string s = a[rd1] + s2;

        if (mp[s] < 1)
        {
            cout << s << " -- ";
            mp[s] = 1;
            count++;
            if (count % 13 == 0)
                cout << "\n\n\n";
        }
        if (count == 52)
            break;
    }

    return 0;
}
