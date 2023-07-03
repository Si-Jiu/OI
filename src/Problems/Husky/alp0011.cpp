#include <bits/stdc++.h>

using namespace std;

int main() {
    bool t;
    long long s, h;
    cin >> t >> s >> h;
    long long value = s * h;
    if (t)
        value /= 2;
    cout << value << endl;

    return 0;
}
