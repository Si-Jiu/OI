#include <bits/stdc++.h>

using namespace std;

int main() {
    short in;
    int cnt = 0, cnt1 = -1;
    do {
        cin >> in;
        cnt += in;
        cnt1++;
    } while (in != 0);
    printf("%.2f", cnt * 1.0 / cnt1);

    return 0;
}
