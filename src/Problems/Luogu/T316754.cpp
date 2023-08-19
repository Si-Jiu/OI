#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

unsigned int n;

void dpf(int n) {
    for (int i = 2; i * i <= n; i++) {
        int cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt)
            cout << i << ' ' << cnt << endl;
    }
    if (n > 1)
        cout << n << " 1" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    dpf(n);

    return 0;
}
