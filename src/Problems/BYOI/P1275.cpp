#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int score;
    cin >> score;
    if (score >= 90)
        cout << score * 3 << endl;
    else if (score >= 80)
        cout << score * 2 << endl;
    else if (score >= 70)
        cout << score << endl;
    else
        cout << 50 << endl;

    return 0;
}
