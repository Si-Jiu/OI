#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long a, b;
    cin >> a >> b;
    cout << ((a % 10) * (b % 10) + (a % 10) * (a % 10) * (a % 10)) % 10 << endl;

    return 0;
}
