#include <bits/stdc++.h>

using namespace std;

int main() {
    short num;
    cin >> num;
    cout << "Today, I ate " << num << " apple";
    if (num > 1)
        cout << "s.";
    else
        cout << '.';

    return 0;
}
