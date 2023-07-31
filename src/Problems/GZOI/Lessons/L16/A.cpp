#include <bits/stdc++.h>

using namespace std;

long long ChenJie(short n, long long sum = 1) {
    if (n <= 1)
        return sum;
    sum *= n;
    n--;
    return ChenJie(n, sum);
}

long long C(short n, short m) {
    return ChenJie(n) / (ChenJie(m) * ChenJie(n - m));
}

int main() {
    short n, m;
    cin >> n >> m;
    cout << C(n, m);

    return 0;
}
