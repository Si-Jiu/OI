#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    unsigned long long km = 0;
    for (int i = 0; i < n; i++) {
        if (x != 6 && x != 7)
            km += 250;
        x++;
        if (x > 7)
            x = 1;
    }
    cout << km << endl;

    return 0;
}
