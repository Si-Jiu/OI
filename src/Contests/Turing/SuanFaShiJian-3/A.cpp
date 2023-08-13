#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    unsigned long long sum = 2;
    for (int i = 1; i < n; i++)
        sum += i + 1;
    cout << sum << endl;

    return 0;
}
