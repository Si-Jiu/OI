#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;
    for (short i = n.length() - 1; i >= 0; i--)
        cout << n[i] << ' ';

    return 0;
}
