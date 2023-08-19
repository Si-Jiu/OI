#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long sum = 0, cnt = 0;
    while (m % 17 != 0)
        m++;
    for (long long i = m; i <= n; i += 17) {
        sum += i;
        cnt++;
    }
    printf("%lld %.1lf", sum, sum * 1.0 / cnt);

    return 0;
}
