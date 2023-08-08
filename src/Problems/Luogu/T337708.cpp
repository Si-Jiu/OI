#include <bits/stdc++.h>

using namespace std;

int main() {
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
