#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int length;
    cin >> length;
    double bike = 27 + 23 + length / 3.0, walk = length / 1.2;
    if (bike < walk) {
        cout << "Bike" << endl;
        cout << (int)bike << endl;
    } else if (walk < bike) {
        cout << "Walk" << endl;
        cout << (int)walk << endl;
    } else {
        cout << "All" << endl;
        cout << (int)walk << endl;
    }

    return 0;
}
