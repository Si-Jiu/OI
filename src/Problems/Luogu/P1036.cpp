#include <bits/stdc++.h>

using namespace std;

int n, k, x[20 + 10], sum = 0;

bool is_prime(int num) {
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

void dfs(int cur) {
    if (cur > k) {
        return;
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    dfs(0);

    return 0;
}
