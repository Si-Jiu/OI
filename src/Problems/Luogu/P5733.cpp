#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    for (short i = 0; i < a.length(); i += 1)
        if ('a' <= a[i] && a[i] <= 'z')
            cout << char(a[i] + 'A' - 'a');
        else
            cout << a[i];

    return 0;
}
