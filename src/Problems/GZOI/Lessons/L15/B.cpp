#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long SumDigit(long long num, long long sum = 0) {
    if (num == 0)
        return sum;
    sum += num % 10;
    num /= 10;
    return SumDigit(num, sum);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a;
    cin >> a;
    cout << SumDigit(a) << endl;

    return 0;
}
