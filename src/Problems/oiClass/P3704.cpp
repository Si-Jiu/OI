#include <bits/stdc++.h>

using namespace std;

int main() {
    int score;
    cin >> score;
    if (90 <= score)
        cout << "PERFECT" << endl;
    else if (80 <= score)
        cout << "EXCELLENT" << endl;
    else if (70 <= score)
        cout << "GOOD" << endl;
    else if (60 <= score)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}
