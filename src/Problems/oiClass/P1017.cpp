#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long sum = 1;
    for (int i = 1; i <= n; i += 2)
        sum *= i;
    cout << sum << endl;

    return 0;
}
