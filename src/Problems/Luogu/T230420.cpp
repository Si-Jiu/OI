#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, m;
    unsigned long long up = 1;
    cin >> n >> m;
    for (short i = n, j = 1; i >= (n - m + 1); i--, j++)
        up = up * i / j;
    cout << up;

    return 0;
}
