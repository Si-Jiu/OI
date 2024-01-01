#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(2)
         << (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5)
         << endl;

    return 0;
}
