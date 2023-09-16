#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, k;
    cin >> n >> k;
    n = n % k;
    while (abs(n - k) < n)
        n = abs(n - k);
    cout << n << endl;

    return 0;
}
