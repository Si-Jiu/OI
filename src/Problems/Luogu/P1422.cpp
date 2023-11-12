#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int kwH;
    cin >> kwH;
    double money = 0;
    if (kwH <= 150)
        money += kwH * 0.4463;
    else {
        money += 150 * 0.4463;
        if (kwH <= 400)
            money += (kwH - 150) * 0.4663;
        else {
            money += (400 - 150) * 0.4663;
            if (kwH >= 401)
                money += (kwH - 400) * 0.5663;
        }
    }
    cout << fixed << setprecision(1) << money << endl;

    return 0;
}
