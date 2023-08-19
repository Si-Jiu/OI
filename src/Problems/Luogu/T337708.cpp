#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long c, n;
    cin >> c >> n;
    for (long long i = 0; i < n; i++) {
        long long t, on, off;
        cin >> t >> on >> off;
        c -= on - off;
        if (c < 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
