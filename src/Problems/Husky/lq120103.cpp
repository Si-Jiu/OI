#include <bits/stdc++.h>

using namespace std;

bool isLeap(short year)
{
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    if (year % 400 == 0)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    n -= 5;
    short year = 1999, month = 5, day = 4;
    short daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < n; i++)
    {
        if (day == daysInMonth[month - 1])
        {
            day = 1;
            if (month == 12)
            {
                month = 1;
                year++;
                if (isLeap(year))
                    daysInMonth[1] = 29;
                else
                    daysInMonth[1] = 28;
                continue;
            }
            month++;
            continue;
        }
        day++;
    }
    printf("%hd-%02d-%02d", year, month, day);

    return 0;
}
