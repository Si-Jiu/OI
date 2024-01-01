#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s == "0") {
        cout << 0 << endl;
        return 0;
    }
    if (s[0] == '-')
        cout << '-';
    bool zero = 0;
    for (int i = s.length() - 1; i >= 0; i--)
        if (s[i] != '-' && (zero || s[i] != '0')) {
            cout << s[i];
            zero = 1;
        }
    cout << endl;

    return 0;
}
