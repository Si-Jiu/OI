#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short num;
    cin >> num;
    cout << num % 10 + num / 10 % 10 + num / 100 << endl;

    return 0;
}
