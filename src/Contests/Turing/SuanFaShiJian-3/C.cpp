#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    deque<long long> que;
    for (long long i = 0; i < n; i++) {
        long long o, x;
        cin >> o >> x;
        if (o == 1) {
            que.push_front(x);
        } else if (o == 2) {
            que.push_back(x);
        } else
            for (int j = 0; j < que.size(); j++)
                if (que[j] == x)
                    que.erase(que.begin() + j, que.begin() + j + 1);
    }
    while (!que.empty()) {
        long long x = que.front();
        que.pop_front();
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}
