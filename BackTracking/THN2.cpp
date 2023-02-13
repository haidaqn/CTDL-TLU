#include <stack>
#include <bits/stdc++.h>

using namespace std;

void THN(int n)
{
    int idle = 0;
    stack<int> pegs[3];

    for (int i = 0; i < n; i++)
    {
        pegs[0].push(n - i);
    }

    cout << "ready!" << endl;
    while (pegs[2].size() < n)
    {
        idle = (idle + 1) % 3;
        int from, to;
        switch (idle)
        {
        case 0:
            from = 1;
            to = 2;
            break;
        case 1:
            from = 0;
            to = 2;
            break;
        case 2:
            from = 0;
            to = 1;
            break;
        }
        // di chuyeenr dia nho hon sang dia lon hon
        if (pegs[from].empty() ||
            (!pegs[to].empty() && pegs[from].top() > pegs[to].top()))
        {
            swap(from, to);
        }

        int disc = pegs[from].top();
        cout << "Move disc " << disc << " from " << from << " to " << to << endl;
        pegs[from].pop();
        pegs[to].push(disc);
    }
}

int main()
{
    THN(5);
}
