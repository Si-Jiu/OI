#include <bits/stdc++.h>

using namespace std;

long long que[10000000], front = 0, back = 0;

int main() {
    long long n, delay, forget;
    cin >> n >> delay >> forget;
    que[0] = 1;
    back++;
    for (long long today = 1; today <= n; today++) {
        while (back - front != 0 && que[front] + forget == today) {
            front++;
            // cout << "front = " << front << ';' << endl;
        }
        long long back1 = back;
        // cout << "back1 = " << back1 << ';' << endl;
        for (long long i = front; i < back1; i++)
            if (que[i] + delay <= today) {
                que[back++] = today;
                // cout << "today = " << today << ';' << endl;
                // cout << "size = " << back - front << ';' << endl;
            }
    }
    cout << back - front << endl;

    return 0;
}
