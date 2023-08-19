#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

map<string, int> money;
map<int, string> pos;
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        money[name] = 0;
        pos[i] = name;
    }
    for (int i = 0; i < n; i++) {
        string name1;
        cin >> name1;
        int m, g;
        cin >> m >> g;
        money[name1] -= m;
        if (g == 0)
            continue;
        for (int j = 0; j < g; j++) {
            string name;
            cin >> name;
            money[name] += m / g;
        }
        money[name1] += m - m / g * g;
    }
    for (int i = 0; i < n; i++)
        cout << pos[i] << ' ' << money[pos[i]] << endl;

    return 0;
}
