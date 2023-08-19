#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const int LEN = 100000000;
int a[LEN], b[LEN], c[LEN];

void mul(int a[], int b[], int c[]) {
    memset(c, 0, sizeof(int) * LEN);
    for (int i = 0; i < LEN; i++)
        for (int j = 0; j < 10; j++) {
            c[i + j] += a[i] * b[j];
            if (c[i + j] >= 10) {
                c[i + j + 1] += c[i + j] / 10;
                c[i + j] %= 10;
            }
        }
}

void arr_copy(int a[], int b[]) {
    for (int i = 0; i < LEN; i++)
        a[i] = b[i];
}

void minus1(int num[]) {
    num[0] -= 1;
    for (int i = 0; i < LEN; i++)
        if (num[i] < 0) {
            num[i + 1]--;
            num[i] += 10;
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

    int n;
    cin >> n;
    a[0] = 2, b[0] = 2;
    for (int i = 1; i < n; i++) {
        mul(a, b, c);
        arr_copy(b, c);
    }
    minus1(b);
    print(b);

    return 0;
}
