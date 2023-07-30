#include <bits/stdc++.h>

using namespace std;

int main() {
    short score;
    cin >> score;
    if (score >= 86)
        cout << "VERY GOOD" << endl;
    else if (score >= 60)
        cout << "GOOD" << endl;
    else
        cout << "BAD" << endl;

    return 0;
}
