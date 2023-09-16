#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int w[2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n, m, k;
    cin >> n >> m >> k;
    int max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp > max1) {
            max2 = max1;
            max1 = tmp;
        } else if (tmp > max2)
            max2 = tmp;
    }
    w[0] = max1;
    w[1] = max2;
    bool d = m / k % 2 == 0;
    unsigned long long sum;
    if (w[0] != w[1])
        sum = (w[0] * (m / k * k)) + (w[1] * (d ? m / k * k : (m / k - 1) * k));
    else
        sum = w[0] * (m / k * k);
    m %= k;
    if (m != 0) {
        if (d)
            sum += w[0] * m;
        else
            sum += w[1] * m;
    }
    cout << sum << endl;

    return 0;
}
