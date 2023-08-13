#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n >= 27 ? 30 - (n - 27) % 30 : 27 - n) << endl;

    return 0;
}
