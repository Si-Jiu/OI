#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int a, b, h;
    cin >> a >> b >> h;
    int cnt = 1;
    while (1) {
        if (h - a <= 0) {
            cout << cnt << endl;
            break;
        }
        h -= a - b;
        cnt++;
    }

    return 0;
}
