#include <bits/stdc++.h>

using namespace std;

int main() {
    double weight;
    cin >> weight;
    cout << fixed << setprecision(1)
         << (weight > 500 ? 500 * 0.5 + (weight - 500) * 0.8 : weight * 0.5)
         << endl;

    return 0;
}
