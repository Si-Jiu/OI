#include <bits/stdc++.h>
#define endl '\n'

int n, lastX, lastY;
int arr[40 + 5][40 + 5];

using namespace std;

int main() {
    cin >> n;
    arr[1][(n + 1) / 2] = 1;
    lastX = 1, lastY = (n + 1) / 2;
    for (int k = 2; k <= n * n; k++)
        if (lastX == 1 && lastY != n) {
            arr[n][lastY + 1] = k;
            lastX = n;
            lastY = lastY + 1;
        } else if (lastY == n && lastX != 1) {
            arr[lastX - 1][1] = k;
            lastX = lastX - 1;
            lastY = 1;
        } else if (lastX == 1 && lastY == n) {
            arr[lastX + 1][lastY] = k;
            lastX = lastX + 1;
        } else if (lastX != 1 && lastY != n) {
            if (arr[lastX - 1][lastY + 1] == 0) {
                arr[lastX - 1][lastY + 1] = k;
                lastX = lastX - 1;
                lastY = lastY + 1;
            } else {
                arr[lastX + 1][lastY] = k;
                lastX = lastX + 1;
            }
        }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
