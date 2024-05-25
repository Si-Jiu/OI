#include <bits/stdc++.h>
#define endl '\n'

unsigned long long a[100 + 10], tmp, cnt = 0;

using namespace std;

int main() {
    while (1) {
        cin >> tmp;
        if (tmp) {
            a[cnt] = tmp;
            cnt++;
        } else
            break;
    }
    for (int i = cnt - 1; i >= 0; i--)
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}
