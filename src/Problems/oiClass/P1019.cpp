#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;
    unsigned long long sum = 1;
    for (int i = 1; i < m; i++)
        sum = (sum + 1) * 2;
    cout << sum << endl;

    return 0;
}
