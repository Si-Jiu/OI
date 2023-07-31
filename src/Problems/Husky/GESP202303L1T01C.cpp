#include <bits/stdc++.h>

using namespace std;

int main() {
    short year, month;
    cin >> year >> month;
    short day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        cout << 29 << endl;
    else
        cout << day[month - 1] << endl;

    return 0;
}
