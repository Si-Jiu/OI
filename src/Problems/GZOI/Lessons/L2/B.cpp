#include <bits/stdc++.h>

using namespace std;

int main() {
    short num;
    cin >> num;
    if (num % 10 != 0)
        cout << num % 10;
    if (num / 10 % 10 != 0)
        cout << num / 10 % 10;
    if (num / 100 != 0)
        cout << num / 100 << endl;

    return 0;
}
