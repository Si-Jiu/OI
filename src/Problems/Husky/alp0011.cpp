#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool t;
    long long s, h;
    cin >> t >> s >> h;
    long long value = s * h;
    if (t)
        value /= 2;
    cout << value << endl;

    return 0;
}
