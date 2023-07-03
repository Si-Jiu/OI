#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a[100], n;
    cin >> n;
    n++;
    a[0] = 1;
    a[1] = 1;
    for (long long i = 2; i < n; i++)
        a[i] = a[i - 2] + a[i - 1];
    cout << a[n - 1] << endl;

    return 0;
}
