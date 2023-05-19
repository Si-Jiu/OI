#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    for (int i = n; i <= m; i++)
        if (i % x != 0)
            cout << i << ' ';

    return 0;
}
