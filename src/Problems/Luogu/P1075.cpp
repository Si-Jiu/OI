#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool is_prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    for (int i = 2; i <= sqrt(n) + 1; i++)
        if (n % i == 0 && is_prime(i)) {
            cout << n / i << endl;
            break;
        }

    return 0;
}
