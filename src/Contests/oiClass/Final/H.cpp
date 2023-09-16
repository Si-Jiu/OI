#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n;
    cin >> n;
    map<unsigned int, vector<unsigned long long>> a;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0) {
            a[i + n / i].push_back(i);
            a[i + n / i].push_back(n / i);
        }
    for (auto p : a) {
        cout << p.second[0] - 1 + p.second[1] - 1 << endl;
        break;
    }

    return 0;
}
