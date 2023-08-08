#include <bits/stdc++.h>

using namespace std;

int main() {
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
