#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a[3];
    for (short i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    for (short i = 0; i < 3; i++)
        cout << a[i] << ' ';

    return 0;
}
