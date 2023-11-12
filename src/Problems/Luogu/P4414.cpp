#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    string b;
    cin >> b;
    for (int i = 0; i < 3; i++) {
        if (b[i] == 'A')
            cout << a[0] << ' ';
        else if (b[i] == 'B')
            cout << a[1] << ' ';
        else
            cout << a[2] << ' ';
    }
    cout << endl;

    return 0;
}
