#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isPrime(long long x) {
    for (long long i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

bool isHWS(long long x) {
    string a;
    long long xCpy = x;
    while (xCpy != 0) {
        a += xCpy % 10 + '0';
        xCpy /= 10;
    }
    for (long long i = 0, j = a.length() - 1; i < a.length() && j >= 0;
         i++, j--)
        if (a[i] != a[j])
            return 0;
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
        if (isHWS(i) && isPrime(i)) {
            cout << i << endl;
        }

    return 0;
}
