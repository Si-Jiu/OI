#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int time = (c * 60 + d) - (a * 60 + b);
    printf("%d %d", time / 60, time % 60);

    return 0;
}
