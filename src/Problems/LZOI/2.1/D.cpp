#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    int c = a;
    a = b;
    b = c;
    cout << a << ' ' << b << endl;

    return 0;
}
