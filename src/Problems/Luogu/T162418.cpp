#include <bits/stdc++.h>

using namespace std;

long long bug[50 + 10];

int main() {
    short n;
    cin >> n;

    bug[1] = 1;
    bug[2] = 1;
    for (short i = 3; i <= n; i++)
        bug[i] = bug[i - 1] + bug[i - 2] * 2;
    cout << bug[n] << endl;

    return 0;
}
