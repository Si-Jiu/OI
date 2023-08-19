#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long a, b;
    cin >> a >> b;
    cout << ((a % 10) * (b % 10) + (a % 10) * (a % 10) * (a % 10)) % 10 << endl;

    return 0;
}
