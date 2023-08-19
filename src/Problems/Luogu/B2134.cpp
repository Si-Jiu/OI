#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isPrime(short n) {
    for (short i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s;
    cin >> s;
    vector<int> cnt;
    for (short i = 2; i + i <= s; i++) {
        short j = s - i;
        if (isPrime(i) && isPrime(j))
            cnt.push_back(i * j);
    }
    sort(cnt.begin(), cnt.end());
    cout << cnt.back() << endl;

    return 0;
}
