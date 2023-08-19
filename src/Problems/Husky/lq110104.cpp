#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string choose, key = "DCBAD";
    short score = 0;
    cin >> choose;
    for (short i = 0; i < 5; i++)
        if (choose[i] == key[i])
            score += 30;
    cout << score;

    return 0;
}
