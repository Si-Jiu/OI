#include <bits/stdc++.h>

using namespace std;

int main() {
    short a, b, c;
    cin >> a >> b >> c;
    if (a < b)
        swap(a, b);
    if (a < c)
        swap(a, c);
    if (b < c)
        swap(b, c);
    cout << a << ' ' << b << ' ' << c << ' ' << endl;

    return 0;
}
