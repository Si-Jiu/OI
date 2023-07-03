#include <bits/stdc++.h>

using namespace std;

int main() {
    short n;
    cin >> n;
    int a[n];
    for (short i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (short i = n - 1; i >= 0; i--)
        cout << a[i] << ' ';

    return 0;
}
