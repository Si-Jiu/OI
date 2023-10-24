#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    long long maxMoney = 0, maxJ = 0;
    long long i = 1200, j = 30;
    for (; i > 0; i -= n, j++) {
        if (j * i > maxMoney) {
            maxJ = j;
            maxMoney = j * i;
        }
    }
    cout << maxJ << ' ' << maxMoney << endl;

    return 0;
}
