#include <bits/stdc++.h>

using namespace std;

int main() {
    short n;
    int count = 1;
    cin >> n;
    for (short i = 1; i < n; i++)
        count = (count + 1) * 2;
    cout << count;

    return 0;
}
