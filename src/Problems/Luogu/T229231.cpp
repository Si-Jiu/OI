#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const int LEN = 1000 + 500;
int a[LEN], b[LEN];

void read(int num[]) {
    memset(num, 0, sizeof(int) * LEN);
    string s;
    cin >> s;
    for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--)
        num[j] = s[i] - '0';
}

void add(int num1[], int num2[]) {
    for (int i = 0; i < LEN; i++) {
        num1[i] += num2[i];
        if (num1[i] >= 10) {
            num1[i + 1]++;
            num1[i] -= 10;
        }
    }
}

void print(int num[]) {
    int pos = LEN - 1;
    while (pos > 0 && num[pos] == 0)
        pos--;
    for (int i = pos; i >= 0; i--)
        cout << num[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    memset(a, 0, sizeof(int) * LEN);
    for (short i = 0; i < n; i++) {
        read(b);
        add(a, b);
    }
    print(a);

    return 0;
}
