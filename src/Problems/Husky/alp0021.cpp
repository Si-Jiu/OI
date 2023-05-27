#include <bits/stdc++.h>

using namespace std;

int main()
{
    short a, b;
    cin >> a >> b;
    for (short i = min(a, b); i <= max(a, b); i++)
        cout << i << ' ';

    return 0;
}
