#include <bits/stdc++.h>

using namespace std;

long long factorial(short num) {
    long long sum = 1;
    for (short i = 2; i <= num; i++)
        sum *= i;
    return sum;
}

int main() {
    unsigned long long sum = 0;
    short n;
    cin >> n;
    for (short i = 1; i <= n; i++)
        sum += factorial(i);
    cout << sum << endl;

    return 0;
}
