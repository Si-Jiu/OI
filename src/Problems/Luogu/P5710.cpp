#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    bool one = x % 2 == 0, two = x > 4 && !(x > 12);
    cout << (one && two) << ' ' << (one || two) << ' ' << (one + two == 1)
         << ' ' << (one + two == 0);

    return 0;
}
