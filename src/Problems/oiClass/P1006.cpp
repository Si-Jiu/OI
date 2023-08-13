#include <bits/stdc++.h>

using namespace std;

int main() {
    long long pay;
    cin >> pay;
    long long buy;
    cin >> buy;
    if (pay < buy)
        cout << "Not Enough!" << endl;
    else
        cout << pay - buy << endl;

    return 0;
}
