#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short k;
    cin >> k;
    for (short i = 0; i < k; i++) {
        for (short j = 0; j < i; j++)
            cout << ' ';
        cout << '@' << endl;
    }

    return 0;
}
