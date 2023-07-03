#include <bits/stdc++.h>

using namespace std;

string n;
bool flag = false;

bool comp(const char &a, const char &b) { return a > b; }

int main() {
    cin >> n;
    if (atoi(n.c_str()) % 30 != 0)
        cout << -1;
    else {
        sort(n.begin(), n.end(), comp);
        cout << n;
    }

    return 0;
}
