#include <bits/stdc++.h>

using namespace std;

int main() {
    string code;
    cin >> code;
    for (short i = 0; i < code.length(); i++)
        cout << char(code[i] + 3);

    return 0;
}
