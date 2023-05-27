#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("factorial.in", "r", stdin);
    // freopen("factorial.out", "w", stdout);

    short t;
    cin >> t;
    for (short i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        unsigned long long sum = 1;
        for (int j = 2; j <= n; j++)
            sum *= j;
        cout << sum % m << endl;
    }

    return 0;
}
