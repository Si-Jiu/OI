#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double length;
    cin >> length;
    cout << 10 + round(length > 2.5 ? (length - 2.5) * 2.6 : 0) << endl;

    return 0;
}
