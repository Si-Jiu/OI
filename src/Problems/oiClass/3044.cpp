#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct Pos {
    int x, y;
};

int main() {
    // freopen("city.in", "r", stdin);
    // freopen("city.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    map<string, Pos> cities;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        Pos p;
        cin >> p.x >> p.y;
        cities[name] = p;
    }
    for (int i = 0; i < m; i++) {
        string name1, name2;
        cin >> name1 >> name2;
        cout << fixed << setprecision(6)
             << sqrt(pow(cities[name1].x - cities[name2].x, 2) +
                     pow(cities[name1].y - cities[name2].y, 2))
             << endl;
    }

    return 0;
}
