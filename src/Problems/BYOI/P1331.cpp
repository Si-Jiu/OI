#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    n /= 2;
    long long max1 = 0;
    for (long long i = 0; i <= n; i++)
        max1 = max(max1, i * (n - i));
    cout << max1 << endl;

    return 0;
}
