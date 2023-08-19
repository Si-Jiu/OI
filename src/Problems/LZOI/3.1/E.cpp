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
    else if (89 >= score && score >= 80)
        cout << 'B' << endl;
    else if (79 >= score && score >= 70)
        cout << 'C' << endl;
    else if (69 >= score && score >= 60)
        cout << 'D' << endl;
    else
        cout << 'E' << endl;

    return 0;
}
