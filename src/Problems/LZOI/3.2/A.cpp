#include <bits/stdc++.h>

using namespace std;

int main() {
    short year;
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? "yes"
                                                                   : "no")
         << endl;

    return 0;
}
