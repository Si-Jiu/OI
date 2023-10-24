#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x == 6)
            continue;
        else if (x == 7) {
            x = 1;
            continue;
        }
        cnt += 150 + 100;
        x++;
    }
    cout << cnt << endl;

    return 0;
}
