#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool check(long long num) {
    return ((num % 10 - num / 10 % 10 - num / 100 % 10 - num / 1000 >= 0)
                ? true
                : false);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, cnt = 0;
    cin >> n;
    for (short i = 0; i < n; i++) {
        short tmp;
        cin >> tmp;
        check(tmp) ? cnt++ : 0;
    }
    cout << cnt << endl;

    return 0;
}
