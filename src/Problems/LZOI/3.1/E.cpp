#include <bits/stdc++.h>

using namespace std;

int main() {
    short score;
    cin >> score;
    if (score >= 90)
        cout << 'A' << endl;
    else if (89 >= score && score >= 80)
        cout << 'B' << endl;
    else if (79 >= score && score >= 70)
        cout << 'C' << endl;
    else if (69 >= score && score >= 60)
        cout << 'D' << endl;
    else
        cout << 'E' << endl;

    return 0;
}
