#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void check(unsigned long long n, short d) {
    while (n != 0) {
        if (n % 10 == d) {
            cout << "true" << endl;
            return;
        }
        n /= 10;
    }
    cout << "false" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n;
    short d;
    cin >> n >> d;
    check(n, d);

    return 0;
}
