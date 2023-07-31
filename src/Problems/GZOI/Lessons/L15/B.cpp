#include <bits/stdc++.h>

using namespace std;

long long SumDigit(long long num, long long sum = 0) {
    if (num == 0)
        return sum;
    sum += num % 10;
    num /= 10;
    return SumDigit(num, sum);
}

int main() {
    long long a;
    cin >> a;
    cout << SumDigit(a) << endl;

    return 0;
}
