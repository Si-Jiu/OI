#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a;
    b = a;
    reverse(a.begin(), a.end());
    cout << (a == b ? "Y" : "N") << endl;

    return 0;
}
