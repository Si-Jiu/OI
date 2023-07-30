#include <bits/stdc++.h>

using namespace std;

int main() {
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
