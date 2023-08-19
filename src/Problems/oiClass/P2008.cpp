#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int score;
    cin >> score;
    if (90 <= score)
        cout << "A" << endl;
    else if (80 <= score)
        cout << "B" << endl;
    else if (70 <= score)
        cout << "C" << endl;
    else if (60 <= score)
        cout << "D" << endl;
    else
        cout << "E" << endl;

    return 0;
}
