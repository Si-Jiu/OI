#include <bits/stdc++.h>

using namespace std;

int main() {
    short s;
    cin >> s;
    for (short i = 0; i < 5; i++) {
        short used;
        cin >> used;
        s -= used;
    }
    cout << s << endl;

    return 0;
}
