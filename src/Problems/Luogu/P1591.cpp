#include <bits/stdc++.h>

using namespace std;

const short LEN = 3000 + 10;

void add1(short num[]) {
    num[0] += 1;
    for (short i = 0; i < LEN; i++)
        if (num[i] >= 10) {
            num[i + 1]++;
            num[i] -= 10;
        }
}

void mul(short a[], short b[], short c[]) {
    memset(c, 0, sizeof(short) * LEN);
    for (short i = 0; i < LEN; i++)
        for (short j = 0; j < 10; j++) {
            c[i + j] += a[i] * b[j];
            if (c[i + j] >= 10) {
                c[i + j + 1] += c[i + j] / 10;
                c[i + j] %= 10;
            }
        }
}

void arrCopy(short a[], short b[]) {
    for (short i = 0; i < LEN; i++)
        a[i] = b[i];
}

void output(short a[]) {}

short tmp1[10], tmp2[LEN], tmp3[LEN];

int main() {
    short t;
    cin >> t;
    for (short i = 0; i < t; i++) {
        short n, a;
        cin >> n >> a;
        memset(tmp1, 0, sizeof(tmp1));
        memset(tmp2, 0, sizeof(tmp2));
        memset(tmp3, 0, sizeof(tmp3));
        tmp1[0] = 1;
        tmp2[0] = 1;
        for (short j = 1; j <= n; j++) {
            mul(tmp2, tmp1, tmp3);
            arrCopy(tmp2, tmp3);
            add1(tmp1);
        }
        short pos = LEN - 1;
        while (pos > 0 && tmp2[pos] == 0)
            pos--;
        short cnt = 0;
        while (pos >= 0) {
            if (tmp2[pos] == a)
                cnt++;
            pos--;
        }
        cout << cnt << endl;
    }

    return 0;
}
