#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    int count = 1;
    cin >> n;
    for (short i = 1; i < n; i++)
        count = (count + 1) * 2;
    cout << count;

    return 0;
}
