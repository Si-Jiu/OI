#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short score;
    cin >> score;
    if (score >= 90)
        cout << 'A' << endl;
    else if (80 <= score && score < 90)
        cout << 'B' << endl;
    else if (70 <= score && score < 80)
        cout << 'C' << endl;
    else if (60 <= score && score < 70)
        cout << 'D' << endl;
    else
        cout << 'F' << endl;

    return 0;
}
