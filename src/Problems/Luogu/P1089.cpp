#include <bits/stdc++.h>
#define endl '\n'

int now = 0, tmp, mum = 0;

using namespace std;

int main() {
    for (int i = 0; i < 12; i++) {
        now += 300;
        cin >> tmp;
        now -= tmp;
        if (now < 0) {
            cout << -(i + 1) << endl;
            return 0;
        }
        if (now >= 100) {
            mum += now / 100 * 100;
            now -= now / 100 * 100;
        }
    }
    cout << int(now + mum * 1.2) << endl;

    return 0;
}
