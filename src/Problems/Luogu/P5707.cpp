#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;
    int time = 8 * 60 - 10 - (s / v + (s % v == 0 ? 0 : 1));
    if (time < 0)
        time = 24 * 60 - abs(time);
    printf("%02d:%02d", time / 60, time % 60);

    return 0;
}
