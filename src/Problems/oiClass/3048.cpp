#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

inline int read() {
    int x = 0, y = 1;
    char c = getchar();
    while (!isdigit(c)) {
        if (c == '-')
            y = -1;
        c = getchar();
    }
    while (isdigit(c))
        x = x * 10 + c - '0', c = getchar();
    return x * y;
}

int main() {
    // freopen("seq.in", "r", stdin);
    // freopen("seq.out", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = read();
    if (n == 2)
        cout << a[0] * a[1] << ' ' << a[0] * a[1] << endl;
    else {
        sort(a, a + n);
        cout << a[n - 1] * a[n - 2] << ' ' << a[0] * a[1] << endl;
    }

    return 0;
}
