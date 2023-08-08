#include <bits/stdc++.h>

using namespace std;

struct node {
    unsigned long long value;
    long long next;
};

node nodes[10005];

int main() {
    // freopen("song.in", "r", stdin);
    // freopen("song.out", "w", stdout);
    unsigned long long n, t;
    cin >> n >> t;
    for (long long i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        nodes[i].value = a;
        nodes[i].next = i + 1;
    }
    nodes[n].next = 1;
    long long tmp = 1;
    while (1) {
        if (t < nodes[tmp].value) {
            cout << tmp << ' ' << t << endl;
            break;
        }
        t -= nodes[tmp].value;
        tmp = nodes[tmp].next;
    }

    return 0;
}
