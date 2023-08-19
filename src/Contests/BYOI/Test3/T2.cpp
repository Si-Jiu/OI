#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int arr[50 + 10][50 + 10];
int n, k;

bool check(int x, int y) {
    int x1[] = {-k + 1, k - 1, 0, 0};
    int y1[] = {0, 0, -k + 1, k - 1};
    for (int i = 0; i < 4; i++)
        if (x + x1[i] < 0 || x + x1[i] >= n || y + y1[i] < 0 || y + y1[i] >= n)
            return false;
    return true;
}

bool check1(int x, int y) {
    int up = 0, down = 0, left = 0, right = 0;
    for (int i = 0; i < k; i++)
        up += arr[x - i][y];
    for (int i = 0; i < k; i++)
        down += arr[x + i][y];
    for (int i = 0; i < k; i++)
        left += arr[x][y - i];
    for (int i = 0; i < k; i++)
        right += arr[x][y + i];
    if (up % 2 == 0 || up % 3 != 0)
        return false;
    if (down % 2 == 0 || down % 3 != 0)
        return false;
    if (left % 2 == 0 || left % 3 != 0)
        return false;
    if (right % 2 == 0 || right % 3 != 0)
        return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cnt = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (!check(i, j))
                continue;
            else if (!check1(i, j))
                continue;
            else
                cnt++;
    cout << cnt << endl;

    return 0;
}
