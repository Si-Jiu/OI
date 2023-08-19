#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    unsigned long long sum = 0, tmp = 0;
    for (int i = 0, j = 1; i < n; i++, j++) {
        tmp += j;
        sum += tmp;
    }
    cout << sum << endl;

    return 0;
}
