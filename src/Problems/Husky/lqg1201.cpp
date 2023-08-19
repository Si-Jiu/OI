#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string code;
    cin >> code;
    for (short i = 0; i < code.length(); i++)
        cout << char(code[i] + 3);

    return 0;
}
