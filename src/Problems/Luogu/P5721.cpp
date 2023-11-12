#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0, j = 1; i < n; i++) {
        for (int x = 0; x < n - i; x++) {
            if (j < 10)
                cout << 0 << j;
            else
                cout << j;
            j++;
        }
        cout << endl;
    }

    return 0;
}
