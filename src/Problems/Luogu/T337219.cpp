#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct dis {
    long long x, y;
    double dis;
};
dis dis1[100000 + 20];

bool comp(const dis &a, const dis &b) {
    return a.dis < b.dis;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> dis1[i].x >> dis1[i].y;
        dis1[i].dis = sqrt(pow(dis1[i].x, 2) + pow(dis1[i].y, 2));
    }
    sort(dis1, dis1 + n, comp);
    for (int i = 0; i < k; i++)
        cout << dis1[i].x << ' ' << dis1[i].y << endl;

    return 0;
}
