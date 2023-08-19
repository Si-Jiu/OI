#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a;
    cin >> a;
    for (short i = 0; i < a.length(); i += 1)
        if ('a' <= a[i] && a[i] <= 'z')
            cout << char(a[i] + 'A' - 'a');
        else
            cout << a[i];

    return 0;
}
