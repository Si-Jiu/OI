#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int cnt = 20;
    for (int i = 0; i < 3; i++) {
        int a;
        cin >> a;
        cnt -= a;
    }
    cout << cnt << endl;

    return 0;
}
