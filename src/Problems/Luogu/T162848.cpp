#include <bits/stdc++.h>

using namespace std;

short cnt[1000 + 5] = {};
short a[1000 + 5];
short n;

bool comp(const short &a, const short &b) {
    if (cnt[a] == cnt[b])
        return a > b;
    return cnt[a] < cnt[b];
}

int main() {
    cin >> n;
    for (short i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    sort(a, a + n, comp);
    for (short i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}
