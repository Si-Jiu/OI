#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    // freopen("capital.in", "r", stdin);
    // freopen("capital.out", "w", stdout);
    string a;
    while (cin >> a) {
        bool flag = false;
        for (int i = 1; i < a.length(); i++)
            if ('a' <= a[i] && a[i] <= 'z') {
                flag = true;
                break;
            }
        if (flag)
            for (int i = 0; i < a.length(); i++)
                cout << a[i] + ('a' - 'A');
        else
            cout << a;
        cout << ' ';
    }

    return 0;
}
