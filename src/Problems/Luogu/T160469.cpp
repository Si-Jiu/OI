#include <bits/stdc++.h>

using namespace std;

struct player {
    short k, s;
};

short n, m;
player players[5000 + 10];

bool comp(const player &a, const player &b) {
    if (a.s == b.s)
        return a.k < b.k;
    return a.s > b.s;
}

int main() {
    cin >> n >> m;
    for (short i = 0; i < n; i++)
        cin >> players[i].k >> players[i].s;
    sort(players, players + n, comp);
    short scoreLine = players[(int)floor(m * 1.5) - 1].s, cnt = 0;
    for (short i = 0; i <= n; i++)
        if (players[i].s >= scoreLine)
            cnt++;
        else
            break;
    cout << scoreLine << ' ' << cnt << endl;
    for (short i = 0; i < cnt; i++)
        cout << players[i].k << ' ' << players[i].s << endl;

    return 0;
}
