#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int que[100000000], front = 0, back = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, delay, forget;
    cin >> n >> delay >> forget;
    que[0] = 1;
    back++;
    for (int today = 1; today <= n; today++) {
        while (back - front != 0 && que[front] + forget == today)
            front++;
        int back1 = back;
        for (int i = front; i < back1; i++)
            if (que[i] + delay <= today)
                que[back++] = today;
    }
    cout << back - front << endl;

    return 0;
}
