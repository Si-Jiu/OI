#include <bits/stdc++.h>

using namespace std;

const int LEN = 2000 + 10;
int base;
int x[LEN], y[LEN], z[2 * LEN];

void read(int num[]) {
    memset(num, 0, sizeof(int) * LEN);
    string s;
    cin >> s;
    for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--)
        if ('0' <= s[i] && s[i] <= '9')
            num[j] = s[i] - '0';
        else
            num[j] = s[i] - 'A' + 10;
}

void mul(int a[], int b[], int c[], int base) {
    memset(c, 0, sizeof(int) * LEN);
    for (int i = 0; i < LEN; i++)
        for (int j = 0; j < LEN; j++) {
            c[i + j] += a[i] * b[j];
            if (c[i + j] >= base) {
                c[i + j + 1] += c[i + j] / base;
                c[i + j] %= base;
            }
        }
}

void print(int num[]) {
    int pos = LEN - 1;
    while (pos > 0 && num[pos] == 0)
        pos--;
    for (int i = pos; i >= 0; i--)
        if (num[i] >= 10)
            cout << char(num[i] - 10 + 'A');
        else
            cout << num[i];
}

int main() {
    cin >> base;
    read(x);
    read(y);
    mul(x, y, z, base);
    print(z);

    return 0;
}
