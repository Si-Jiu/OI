#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    unsigned long long sum = 0, cnt = 0;
    for (int i = 1; cnt < k; i++)
        for (int j = 0; j < i && cnt < k; j++) {
            sum += i;
            cnt++;
        }
    cout << sum << endl;

    return 0;
}
