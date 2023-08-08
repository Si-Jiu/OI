#include <bits/stdc++.h>

using namespace std;

unsigned long long cnt = 1;
unsigned long long n;

void fenjie(unsigned long long n) {
    for (unsigned long long i = 2; i * i <= n; i++)
        if (n % i == 0) {
            cnt += i;
            if (i * i != n)
                cnt += n / i;
        }
}
int main() {
    cin >> n;
    if (n == 1) {
        cout << "Deficient" << endl;
        return 0;
    }
    fenjie(n);
    if (cnt == n)
        cout << "Perfect" << endl;
    else if (cnt <= n)
        cout << "Deficient" << endl;
    else
        cout << "Abundant" << endl;

    return 0;
}
