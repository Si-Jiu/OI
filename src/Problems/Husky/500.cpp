#include <bits/stdc++.h>

using namespace std;

int main() {
    short n;
    cin >> n;
    int cnt = 0;
    for (short i = 1; i <= n; i += 2)
        cnt += i;
    cout << cnt << endl;

    return 0;
}
