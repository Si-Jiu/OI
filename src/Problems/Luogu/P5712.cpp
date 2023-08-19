#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short num;
    cin >> num;
    cout << "Today, I ate " << num << " apple";
    if (num > 1)
        cout << "s.";
    else
        cout << '.';

    return 0;
}
