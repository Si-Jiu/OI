#include <bits/stdc++.h>

using namespace std;

const short LEN = 2000+10;
short a[LEN], b[LEN];

void read(short num[]) {
    memset(num, 0, sizeof(short) * LEN);
    string s;
    cin >> s;
    for (short i = 0, j = s.length() - 1; i < s.length(); i++, j--)
        if ('0' <= s[i] && s[i] <= '9')
            num[j] = s[i] - '0';
        else
            num[j] = s[i] - 'A' + 10;
}

void add(short num1[], short num2[], short base) {
    for (short i = 0; i < LEN; i++) {
        num1[i] += num2[i];
        if (num1[i] >= base) {
            num1[i + 1]++;
            num1[i] -= base;
        }
    }
}

void print(short num[]) {
    short pos = LEN - 1;
    while (pos > 0 && num[pos] == 0)
        pos--;
    for (short i = pos; i >= 0; i--)
        if (num[i] >= 10)
            cout << char(num[i] - 10 + 'A');
        else
            cout << num[i];
}

int main() {
    short base;
    cin >> base;
    read(a);
    read(b);
    add(a, b, base);
    print(a);

    return 0;
}
