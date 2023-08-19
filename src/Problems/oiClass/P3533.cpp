#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int t;
    cin >> t;
    printf("%02d:%02d:%02d", t / 60 / 60, t / 60 % 60, t % 60);

    return 0;
}
