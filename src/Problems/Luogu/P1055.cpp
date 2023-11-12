#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    long long cnt = 0, cnt1 = 1;
    string b;
    cin >> b;
    for (int i = 0; i < 12; i++) {
        if (b[i] != '-') {
            cnt += (b[i] - '0') * cnt1;
            cnt1++;
        }
    }
    int check = cnt % 11;
    if (check == 10 && b[12] == 'X')
        cout << "Right" << endl;
    else if (check == b[12] - '0')
        cout << "Right" << endl;
    else {
        for (int i = 0; i < 12; i++)
            cout << b[i];
        if (check == 10)
            cout << 'X' << endl;
        else
            cout << check << endl;
    }

    return 0;
}
