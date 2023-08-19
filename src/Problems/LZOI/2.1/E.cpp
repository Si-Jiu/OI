#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sec;
    cin >> sec;
    cout << sec / 60 << "小时" << sec % 60 << "分钟" << endl;

    return 0;
}
