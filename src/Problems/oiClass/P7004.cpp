#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    long long tmp, max1 = 1, max2 = 1;
    for (long long i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp >= max1) {
            max2 = max1;
            max1 = tmp;
        } else if (tmp >= max2 && tmp <= max1)
            max2 = tmp;
    }
    cout << max1 * max2 << endl;

    return 0;
}
