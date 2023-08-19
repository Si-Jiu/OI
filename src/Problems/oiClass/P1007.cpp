#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long x;
    cin >> x;
    cout << (x % 2 == 0 ? x / 2 : x * 2) << endl;

    return 0;
}
