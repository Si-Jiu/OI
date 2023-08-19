#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n, m, a;
    cin >> n >> m >> a;
    if (n % a == 0)
        n = n / a;
    else
        n = n / a + 1;
    if (m % a == 0)
        m = m / a;
    else
        m = m / a + 1;
    cout << n * m << endl;

    return 0;
}
