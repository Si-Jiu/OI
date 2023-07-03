#include <bits/stdc++.h>

using namespace std;

const short LEN = 127 + 10;

void read(short num[]) {
    memset(num, 0, sizeof(short) * LEN);
    string s;
    cin >> s;
    for (short i = 0, j = s.length() - 1; i < s.length(); i++, j--)
        num[j] = s[i] - '0';
}

void add(short num1[], short num2[], short res[]) {
    memset(res, 0, sizeof(short) * LEN);
    for (short i = 0; i < LEN; i++) {
        res[i] += num1[i] + num2[i];
        if (res[i] >= 10) {
            res[i + 1]++;
            res[i] -= 10;
        }
    }
}

void print(short num[]) {
    short pos = LEN - 1;
    while (pos > 0 && num[pos] == 0)
        pos--;
    for (short i = pos; i >= 0; i--)
        cout << num[i];
}

int main() {
    short a[LEN], b[LEN], c[LEN];
    read(a);
    read(b);
    add(a, b, c);
    print(c);

    return 0;
}
