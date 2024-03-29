#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool is_prime(int num) {
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    for (int i = 2; i <= sqrt(num) + 1; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = n - 1; i >= 2; i--) {
        if (!is_prime(i))
            continue;
        if (n % i == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
