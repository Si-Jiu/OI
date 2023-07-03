#include <bits/stdc++.h>

using namespace std;

int main() {
    short n;
    cin >> n;
    long long cnt = 1;
    for (short i = 0; i < n; i++) {
        short in;
        cin >> in;
        cnt *= in;
    }
    cout << cnt << endl;

    return 0;
}
