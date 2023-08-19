#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    short n;
    cin >> n;
    int cnt = 0;
    for (short i = 0; i < n; i++) {
        short in;
        cin >> in;
        cnt += in;
    }
    printf("%.2f", cnt * 1.0 / n);

    return 0;
}
