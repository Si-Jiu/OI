#include <bits/stdc++.h>

using namespace std;

int main() {
    short age;
    cin >> age;
    cout << (age >= 18
                 ? "You're old enough to drive."
                 : "Sorry,you can drive in " + to_string(18 - age) + " years.")
         << endl;

    return 0;
}
