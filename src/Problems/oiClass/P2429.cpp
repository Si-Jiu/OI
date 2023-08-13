#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long sum = 1;
    for (int i = 1; i <= n; i++)
        sum *= i;
    cout << fixed << setprecision(0) << sum << endl;

    return 0;
}
