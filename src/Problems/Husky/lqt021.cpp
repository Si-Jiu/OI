#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool IsLeap(long long year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
}

long long getMonthDays(long long year, long long month) {
    map<long long, long long> days{{1, 31}, {2, 28},  {3, 31},  {4, 30},
                                   {5, 31}, {6, 30},  {7, 31},  {8, 31},
                                   {9, 30}, {10, 31}, {11, 30}, {12, 31}};
    if (month == 2 && IsLeap(year))
        return 29;
    return days[month];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, x, y, m, d, sum = 0;
    cin >> n >> x >> y >> m >> d;
    if (x == m) {
        cout << d - y;
        return 0;
    }
    sum += getMonthDays(n, x) - y + 1;
    for (long long month = x + 1; month < m; month++)
        sum += getMonthDays(n, month);
    sum += d - 1;
    cout << sum;

    return 0;
}
