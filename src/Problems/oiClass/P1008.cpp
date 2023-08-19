#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int father, mother;
    bool me;
    cin >> father >> mother >> me;
    if (me)
        cout << (father + mother + 13) / 2 << endl;
    else
        cout << (father + mother - 13) / 2 << endl;

    return 0;
}
