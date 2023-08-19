#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short apples[10], arm, cnt = 0;
    for (short i = 0; i < 10; i++)
        cin >> apples[i];
    cin >> arm;
    arm += 30;
    for (short i = 0; i < 10; i++)
        if (apples[i] <= arm)
            cnt++;
    cout << cnt << endl;

    return 0;
}
