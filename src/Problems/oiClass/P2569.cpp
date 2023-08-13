#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    unsigned long long t = n % 100;
    for (int i = 1; i < k; i++)
        t = t % 100 * n % 100;
    cout << t / 10 << ' ' << t % 10 << endl;

    return 0;
}
