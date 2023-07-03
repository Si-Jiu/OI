#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (short i = 0; i < s.length(); i++)
        if ('a' <= s[i] && s[i] <= 'z')
            cout << char(s[i] - 32);
        else
            cout << s[i];

    return 0;
}
