#include <bits/stdc++.h>

using namespace std;

int main() {
    int score;
    cin >> score;
    if (score >= 90)
        cout << score * 3 << endl;
    else if (score >= 80)
        cout << score * 2 << endl;
    else if (score >= 70)
        cout << score << endl;
    else
        cout << 50 << endl;

    return 0;
}
