#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long sum = 0;
    for (int i = 0, j = 1; i < n; i++, j += 2)
        sum += j;
    cout << sum << endl;

    return 0;
}
