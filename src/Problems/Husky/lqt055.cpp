#include <bits/stdc++.h>
#define llong long long
#define float double
// OI千万题,longlong第一题,类型不规范,RE两行泪

using namespace std;

const llong LEN = 100000 + 5000;
llong pos[LEN];

int main()
{
    llong t;
    cin >> t;
    while (t--)
    {
        llong x, y;
        memset(pos, -1, sizeof(pos));
        cin >> x >> y;
        queue<llong> sons;
        pos[x] = 0;
        sons.push(x);
        while (true)
        {
            llong dad = sons.front();
            if (dad == y)
            {
                cout << pos[dad] << endl;
                break;
            }
            sons.pop();
            llong newFront = dad + 1;
            if (newFront < LEN && pos[newFront] == -1)
            {
                sons.push(newFront);
                pos[newFront] = pos[dad] + 1;
            }
            llong newBack = dad - 1;
            if (newBack < LEN && pos[newBack] == -1)
            {
                sons.push(newBack);
                pos[newBack] = pos[dad] + 1;
            }
            llong newDouble = 2 * dad;
            if (newDouble < LEN && pos[newDouble] == -1)
            {
                sons.push(newDouble);
                pos[newDouble] = pos[dad] + 1;
            }
        }
    }

    return 0;
}
