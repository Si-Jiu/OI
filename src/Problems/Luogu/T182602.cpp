#include <bits/stdc++.h>

using namespace std;

void encryption(string original) {
    if (original.length() == 3) {
        cout << original[0] << original[2] << original[1];
        return;
    }
    int temp = original.length() / 3;
    encryption(original.substr(0, temp));
    encryption(original.substr(temp + temp, temp));
    encryption(original.substr(temp, temp));
}

int main() {
    string original;
    cin >> original;
    encryption(original);

    return 0;
}
