#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<int> balls;
    int n, m;
    cin >> n;
    while (n--) {
        int newBall;
        cin >> newBall;
        balls.push_back(newBall);
    }
    cin >> m;
    while (m--) {
        bool p;
        cin >> p;
        if (p) {
            int newBall;
            cin >> newBall;
            balls.push_back(newBall);
            balls.pop_front();
        } else {
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
