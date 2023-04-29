#include <bits/stdc++.h>
#define short long long // OI千万题,longlong第一题,类型不规范,RE两行泪
#define llong long long
#define float double

using namespace std;

int main()
{
    priority_queue<int> scores;
    int n;
    char o;
    cin >> n;
    while (n--)
    {
        cin >> o;
        if (o == 'I')
        {
            int addScore;
            cin >> addScore;
            scores.push(addScore);
        }
        else
        {
            if (scores.empty())
                cout << -1 << endl;
            else
            {
                cout << scores.top() << endl;
                scores.pop();
            }
        }
    }

    return 0;
}
