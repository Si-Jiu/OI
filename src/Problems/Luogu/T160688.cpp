#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a[100], n;
    cin >> n;
    n++;
    a[0] = 1;
    a[1] = 1;
    for (long long i = 2; i < n; i++)
        a[i] = a[i - 2] * 2 + a[i - 1];
    cout << a[n - 1] << endl;

    return 0;
}
