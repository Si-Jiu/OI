#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    string str;
    cin >> str;
    long long cnt = 0;
    for (short i = 0, j = str.length() - 1; i < str.length(); i++, j--)
        cnt += (str[j] - '0') * pow(n, i);
    cout << cnt << endl;

    return 0;
}
