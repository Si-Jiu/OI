#include <bits/stdc++.h>
#define llong long long

using namespace std;

llong t, x;
bool flag;

int main()
{
    cin >> t;
    for (llong i = 0; i < t; i++)
    {
        cin >> x;
        flag = false;
        for (llong j = 2; j * j < x; j++)
        {
            if (x % j == 0)
            {
                if (gcd(j, x / j) == 1)
                {
                    flag = true;
                    break;
                }
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
