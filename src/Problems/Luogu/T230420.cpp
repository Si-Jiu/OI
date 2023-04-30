#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n, m;
    unsigned long long up = 1;
    cin >> n >> m;
    for (short i = n, j = 1; i >= (n - m + 1); i--, j++)
        up = up * i / j;
    cout << up;

    return 0;
}
