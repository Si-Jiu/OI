#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    for (short i = 0; i < s.length(); i++)
        if ('a' <= s[i] && s[i] <= 'z')
            cout << char(s[i] - 32);
        else
            cout << s[i];

    return 0;
}
