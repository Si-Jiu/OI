#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short age;
    cin >> age;
    cout << (age >= 18
                 ? "You're old enough to drive."
                 : "Sorry,you can drive in " + to_string(18 - age) + " years.")
         << endl;

    return 0;
}
