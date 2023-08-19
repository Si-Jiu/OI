#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    if (n > 0)
        cout << "positive" << endl;
    else if (n == 0)
        cout << "zero" << endl;
    else
        cout << "negative" << endl;

    return 0;
}
