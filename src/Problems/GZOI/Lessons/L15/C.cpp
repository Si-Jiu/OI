#include <bits/stdc++.h>

using namespace std;

bool check(long long num) {
    return ((num % 10 - num / 10 % 10 - num / 100 % 10 - num / 1000 >= 0)
                ? true
                : false);
}

int main() {
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
