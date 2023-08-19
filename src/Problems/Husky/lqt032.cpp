#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

string n;
bool flag = false;

bool comp(const char &a, const char &b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    if (atoi(n.c_str()) % 30 != 0)
        cout << -1;
    else {
        sort(n.begin(), n.end(), comp);
        cout << n;
    }

    return 0;
}
