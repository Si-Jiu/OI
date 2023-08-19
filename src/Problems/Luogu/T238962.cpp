#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<string, int> people;
    string record[n];
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        people[name] = 0;
        record[i] = name;
    }
    for (int i = 0; i < n; i++) {
        int m, v;
        cin >> m >> v;
        people[record[i]] -= m * v;
        string name;
        cin >> name;
        people[name] += m * v;
    }
    for (int i = n - 1; i >= 0; i--)
        cout << people[record[i]] << endl;

    return 0;
}
