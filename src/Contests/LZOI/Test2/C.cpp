#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int number[100000], color[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> number[i];
    for (int i = 0; i < n; i++)
        cin >> color[i];

    return 0;
}
