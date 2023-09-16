#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int days[6] = {1, 3, 7, 30, 120, 365}, v[6];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> v[i];
    unsigned long long day = 0, sum = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        bool sign;
        cin >> sign;
        if (sign) {
            day++;
            if (cur != 5 && day >= days[cur + 1])
                cur++;
            sum += v[cur];
        } else {
            day = 0;
            cur = 0;
        }
    }
    cout << sum << endl;

    return 0;
}
