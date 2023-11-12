#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int k;
    cin >> k;
    int cnt = 0;
    for (int i = 1; k != 0; i++)
        for (int j = 0; j < i && k != 0; j++) {
            k--;
            cnt += i;
        }
    cout << cnt << endl;

    return 0;
}
