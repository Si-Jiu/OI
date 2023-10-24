#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j != 0) {
            if (j % 10 == 6) {
                cnt++;
                break;
            }
            j /= 10;
        }
    }
    cout << (cnt % 2 == 0 ? "playground" : "library") << endl;

    return 0;
}
