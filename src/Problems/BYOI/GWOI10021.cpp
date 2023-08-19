#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long score1, score2;
    cin >> score1 >> score2;
    cout << ((score1 < 60 && score2 >= 60) || (score1 >= 60 && score2 < 60) ? 1
                                                                            : 0)
         << endl;

    return 0;
}
