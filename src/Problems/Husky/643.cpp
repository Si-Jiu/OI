#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int n1 = n, cnt = 0;
    while (n1 != 0) {
        cnt += pow(n1 % 10, 3);
        n1 /= 10;
    }
    cout << (cnt == n ? "yes" : "no") << endl;

    return 0;
}
