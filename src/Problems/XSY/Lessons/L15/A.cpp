#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long num) {
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    for (long long i = 2; i <= sqrt(num) + 1; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main() {
    long long a;
    cin >> a;
    cout << (is_prime(a) ? "YES" : "NO") << endl;

    return 0;
}
