#include <bits/stdc++.h>

using namespace std;

int main() {
    double length;
    cin >> length;
    cout << 10 + round(length > 2.5 ? (length - 2.5) * 2.6 : 0) << endl;

    return 0;
}
