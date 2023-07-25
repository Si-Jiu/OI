#include <bits/stdc++.h>

using namespace std;

int main() {
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
