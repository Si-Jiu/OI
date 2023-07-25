#include <bits/stdc++.h>

using namespace std;

int main() {
    short num;
    cin >> num;
    cout << ((num % 10) != 0 ? (num % 10) : '\0')
         << ((num / 10 % 10) != 0 ? (num / 10 % 10) : '\0')
         << ((num / 100) != 0 ? (num / 100) : '\0');

    return 0;
}
