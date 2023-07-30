#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    long long cnt = 0;
    cin >> m >> n;
    for (long long i = m + !(m % 2 == 0); i <= n - !(n % 2 == 0); i += 2)
        cnt += i;
    cout << cnt << endl;

    return 0;
}
