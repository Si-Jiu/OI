#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double m, h;
    cin >> m >> h;
    double bmi = m / pow(h, 2);
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 24)
        cout << "Normal" << endl;
    else {
        cout << bmi << endl;
        cout << "Overweight" << endl;
    }

    return 0;
}
