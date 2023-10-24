#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) {
        cout << '0' << endl;
        return 0;
    }
    long long i = 1;
    long long cnt = 1;
    while (1) {
        if (i == 1) {
            i += 2;
            continue;
        }
        if (cnt + i * 2 > n)
            break;
        cnt += i * 2;
        i += 2;
    }
    i -= 2;
    for (long long k = i; k >= 1; k -= 2) {
        for (long long j = 0; j < (i - k) / 2; j++)
            cout << ' ';
        for (long long j = 0; j < k; j++)
            cout << '*';
        cout << endl;
    }
    for (long long k = 3; k <= i; k += 2) {
        for (long long j = 0; j < (i - k) / 2; j++)
            cout << ' ';
        for (long long j = 0; j < k; j++)
            cout << '*';
        cout << endl;
    }
    cout << n - cnt << endl;

    return 0;
}
