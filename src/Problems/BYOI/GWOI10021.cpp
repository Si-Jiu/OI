#include <bits/stdc++.h>

using namespace std;

int main() {
    long long score1, score2;
    cin >> score1 >> score2;
    cout << ((score1 < 60 && score2 >= 60) || (score1 >= 60 && score2 < 60) ? 1
                                                                            : 0)
         << endl;

    return 0;
}
