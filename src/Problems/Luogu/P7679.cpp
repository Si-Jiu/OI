#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

vector<int> cnt;
unsigned long long n;

void fenjie(unsigned long long n) {
    for (unsigned long long i = 1; i * i <= n; i++)
        if (n % i == 0) {
            cnt.push_back(i);
            if (i * i != n)
                cnt.push_back(n / i);
        }
}

int r, g;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> r >> g;
    fenjie(__gcd(r, g));
    sort(cnt.begin(), cnt.end());
    for (int i = 0; i < cnt.size(); i++) {
        cout << cnt[i] << ' ' << r / cnt[i] << ' ' << g / cnt[i] << endl;
    }

    return 0;
}
