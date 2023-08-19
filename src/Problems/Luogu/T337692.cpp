#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    queue<int> ticket;
    queue<int> pos;
    int time = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        ticket.push(tmp);
        pos.push(i);
    }
    int ans[n];
    while (!ticket.empty()) {
        int front = ticket.front();
        time++;
        front--;
        if (front >= 1) {
            ticket.push(front);
            pos.push(pos.front());
        } else
            ans[pos.front()] = time;
        ticket.pop();
        pos.pop();
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';

    return 0;
}
