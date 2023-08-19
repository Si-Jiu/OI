#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

short month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, y, m;

void leap() {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        month[1]++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> y >> m;
    leap();
    cout << month[m - 1];

    return 0;
}
