#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0, x = 1; i < n; i++, x += 2) {
        for (int j = 0; j < n - i - 1; j++)
            cout << ' ';
        for (int j = 0; j < x; j++)
            cout << '*';
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++)
            cout << ' ';
        cout << '*' << endl;
    }

    return 0;
}
