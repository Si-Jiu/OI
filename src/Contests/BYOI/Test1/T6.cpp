#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int newN = unique(a, a + n) - a;
    for (int i = 0; i < newN; i++)
        cout << a[i] << ' ';

    return 0;
}
