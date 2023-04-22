#include <bits/stdc++.h>
#define short long long // IO千万题,longlong第一题,类型不规范,RE两行泪
#define llong long long
#define float double

using namespace std;

int main()
{
    deque<int> balls;
    int n, m;
    cin >> n;
    while (n--)
    {
        int newBall;
        cin >> newBall;
        balls.push_back(newBall);
    }
    cin >> m;
    while (m--)
    {
        bool p;
        cin >> p;
        if (p)
        {
            int newBall;
            cin >> newBall;
            balls.push_back(newBall);
            balls.pop_front();
        }
        else
        {
            int newBall;
            cin >> newBall;
            balls.push_front(newBall);
            balls.pop_back();
        }
    }
    for (int i = 0; i < balls.size(); i++)
        cout << balls[i] << ' ';

    return 0;
}
