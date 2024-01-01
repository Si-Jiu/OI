#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isPrime(long long x) {
    for (long long i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    long long a, b;
    cin >> a >> b;
    int aLen = 0, bLen = 0, aCpy = a, bCpy = b;
    while (aCpy != 0) {
        aLen++;
        aCpy /= 10;
    }
    while (bCpy != 0) {
        bLen++;
        bCpy /= 10;
    }
    for (int i = aLen; i <= bLen; i++) {
        if (i == 1) {
            if (a <= 2 && b >= 2)
                cout << 2 << endl;
            if (a <= 3 && b >= 3)
                cout << 3 << endl;
            if (a <= 5 && b >= 5)
                cout << 5 << endl;
            if (a <= 7 && b >= 7)
                cout << 7 << endl;
        } else if (i == 2) {
            if (a <= 11 && b >= 11)
                cout << 11 << endl;
        } else if (i == 3)
            for (int d1 = 1; d1 <= 9; d1 += 2)
                for (int d2 = 0; d2 <= 9; d2++) {
                    int palindrome = 100 * d1 + 10 * d2 + d1;
                    if (a <= palindrome && palindrome <= b &&
                        isPrime(palindrome))
                        cout << palindrome << endl;
                    if (palindrome > b)
                        break;
                }
        else if (i == 5)
            for (int d1 = 1; d1 <= 9; d1 += 2)
                for (int d2 = 0; d2 <= 9; d2++)
                    for (int d3 = 0; d3 <= 9; d3++) {
                        int palindrome =
                            10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;
                        if (a <= palindrome && palindrome <= b &&
                            isPrime(palindrome))
                            cout << palindrome << endl;
                        if (palindrome > b)
                            break;
                    }
        else if (i == 7)
            for (int d1 = 1; d1 <= 9; d1 += 2)
                for (int d2 = 0; d2 <= 9; d2++)
                    for (int d3 = 0; d3 <= 9; d3++)
                        for (int d4 = 0; d4 <= 9; d4++) {
                            int palindrome = 1000000 * d1 + 100000 * d2 +
                                             10000 * d3 + 1000 * d4 + 100 * d3 +
                                             10 * d2 + d1;
                            if (a <= palindrome && palindrome <= b &&
                                isPrime(palindrome))
                                cout << palindrome << endl;
                            if (palindrome > b)
                                break;
                        }
    }

    return 0;
}
