#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool is_prime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n;
    cin >> n;
    unsigned long long cnt = 0;
    while (n != 0) {
        unsigned long long min1 = 10000000000 + 10;
        for (unsigned long long i = 1; i * i <= n; i++)
            if (n % i == 0) {
                if (is_prime(i))
                    min1 = min(min1, i);
                else if (is_prime(n / i))
                    min1 = min(min1, n / i);
            }
        n -= min1;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
