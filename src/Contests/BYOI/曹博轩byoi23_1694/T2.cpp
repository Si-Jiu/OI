#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct fuck {
    int val;
    bool full = false, been = false;
};

bool comp(const fuck &a, const fuck &b) {
    return a.val < b.val;
}

int n;
vector<fuck> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        fuck tmp;
        cin >> tmp.val;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; i++) {
        int u = upper_bound(v.begin(), v.end(), v[i], comp) - v.begin();
        if (u == v.end() - v.begin())
            break;
        int j;
        for (j = u; j < n; j++)
            if (!v[j].full)
                break;
        if (!v[j].full) {
            v[j].full = true;
            v[i].been = true;
        };
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (!v[i].been)
            cnt++;
    cout << cnt << endl;

    return 0;
}
