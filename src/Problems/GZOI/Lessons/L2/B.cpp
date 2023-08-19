#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short num;
    cin >> num;
    if (num % 10 != 0)
        cout << num % 10;
    if (num / 10 % 10 != 0)
        cout << num / 10 % 10;
    if (num / 100 != 0)
        cout << num / 100 << endl;

    return 0;
}
