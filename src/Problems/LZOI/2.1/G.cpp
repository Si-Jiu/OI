#include <bits/stdc++.h>

using namespace std;

int main() {
    short num;
    cin >> num;
    cout << num % 10 + num / 10 % 10 + num / 100 << endl;

    return 0;
}
