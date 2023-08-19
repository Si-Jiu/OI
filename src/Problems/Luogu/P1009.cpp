#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const short LEN = 5000 + 10;

void add1(short num[]) {
    num[0] += 1;
    for (short i = 0; i < LEN; i++)
        if (num[i] >= 10) {
            num[i + 1]++;
            num[i] -= 10;
        }
}

void add(short num1[], short num2[]) {
    for (short i = 0; i < LEN; i++) {
        num1[i] += num2[i];
        if (num1[i] >= 10) {
            num1[i + 1]++;
            num1[i] -= 10;
        }
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

void print(short num[]) {
    short pos = LEN - 1;
    while (pos > 0 && num[pos] == 0)
        pos--;
    for (short i = pos; i >= 0; i--)
        cout << num[i];
}

short tmp1[10], tmp2[LEN], tmp3[LEN], tmp4[LEN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    memset(tmp4, 0, sizeof(tmp4));
    for (short i = 1; i <= n; i++) {
        memset(tmp1, 0, sizeof(tmp1));
        memset(tmp2, 0, sizeof(tmp2));
        memset(tmp3, 0, sizeof(tmp3));
        tmp1[0] = 1;
        tmp2[0] = 1;
        for (short j = 1; j <= i; j++) {
            mul(tmp2, tmp1, tmp3);
            arrCopy(tmp2, tmp3);
            add1(tmp1);
        }
        add(tmp4, tmp2);
    }
    print(tmp4);

    return 0;
}
