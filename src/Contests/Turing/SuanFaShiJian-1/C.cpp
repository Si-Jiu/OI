#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << 0 << endl;
    long long a[n];
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long cnt = 0;
    for (long long i = 0; i < n - 2; i++) {
        long long sum = 0;
        sum += a[i];
        for (long long j = i + 1; j < n - 1; j++) {
            sum += a[j];
            if (binary_search(a + j + 1, a + n, 0 - sum))
                cnt++;
            sum -= a[j];
        }
    }
    cout << cnt << endl;

    return 0;
}
