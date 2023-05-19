#include <bits/stdc++.h>

using namespace std;

struct student
{
    short id, chinese, math, english, total;
};

bool comp(const student &a, const student &b)
{
    if (a.total == b.total)
    {
        if (a.chinese == b.chinese)
            return a.id < b.id;
        return a.chinese > b.chinese;
    }
    return a.total > b.total;
}

int main()
{
    short n;
    cin >> n;
    student a[n];
    for (short i = 0; i < n; i++)
    {
        a[i].id = i + 1;
        cin >> a[i].chinese >> a[i].math >> a[i].english;
        a[i].total = a[i].chinese + a[i].math + a[i].english;
    }
    sort(a, a + n, comp);
    for (short i = 0; i < 5; i++)
        cout << a[i].id << ' ' << a[i].total << endl;

    return 0;
}
