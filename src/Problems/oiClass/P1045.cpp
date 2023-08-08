#include <bits/stdc++.h>

using namespace std;

int main() {
    short cnt = 28;
    for (short i = 0; i < 6; i++) {
        short tmp;
        cin >> tmp;
        cnt -= tmp;
    }
    cout << cnt << endl;

    return 0;
}
