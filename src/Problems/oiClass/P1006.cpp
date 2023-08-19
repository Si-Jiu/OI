#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long pay;
    cin >> pay;
    long long buy;
    cin >> buy;
    if (pay < buy)
        cout << "Not Enough!" << endl;
    else
        cout << pay - buy << endl;

    return 0;
}
