#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long n, p;
    cin >> n >> p;
    unsigned long long sum = 0;
    for (unsigned long long i = 1; i <= n; i++) {
        unsigned long long tmp = 1;
        for (unsigned long long j = 2; j <= i; j++)
            tmp = (tmp % p) * (j % p);
        sum += tmp % p;
    }
    cout << sum % p << endl;

    return 0;
}
