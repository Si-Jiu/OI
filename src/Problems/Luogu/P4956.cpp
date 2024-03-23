#include <bits/stdc++.h>
#define endl '\n'

int n;

using namespace std;

int main() {
    cin >> n;
    for (int k = 1;; k++)
        for (int x = 100; x > 0; x--)
            if (364 * x + 1092 * k == n) {
                cout << x << endl;
                cout << k << endl;
                return 0;
            }

    return 0;
}
