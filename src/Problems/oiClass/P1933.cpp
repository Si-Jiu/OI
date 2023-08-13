#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long sum = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            sum += (n / i) * (n / i);
    cout << sum << endl;

    return 0;
}
