#include <bits/stdc++.h>

using namespace std;

int main()
{
    short a[3];
    for (short i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    for (short i = 0; i < 3; i++)
        cout << a[i] << ' ';

    return 0;
}
