#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    unsigned long long t = n % 100;
    for (int i = 1; i < k; i++)
        t = t % 100 * n % 100;
    cout << t / 10 << ' ' << t % 10 << endl;

    return 0;
}
