#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m;
    cin >> m;
    unsigned long long sum = 1;
    for (int i = 1; i < m; i++)
        sum = (sum + 1) * 2;
    cout << sum << endl;

    return 0;
}
