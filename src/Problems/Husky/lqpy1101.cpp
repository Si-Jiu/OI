#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    if (str.find("er") != str.npos)
        cout << str.substr(0, str.length() - 2) << endl;
    else if (str.find("ly") != str.npos)
        cout << str.substr(0, str.length() - 2) << endl;
    else if (str.find("ing") != str.npos)
        cout << str.substr(0, str.length() - 3) << endl;
    else
        cout << str << endl;

    return 0;
}
