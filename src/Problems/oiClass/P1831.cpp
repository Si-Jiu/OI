#include <bits/stdc++.h>

using namespace std;

int main() {
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m;
    cin >> y >> m;
    if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)))
        month[1] = 29;
    cout << month[m - 1] << endl;

    return 0;
}
