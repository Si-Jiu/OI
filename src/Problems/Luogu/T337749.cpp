#include <bits/stdc++.h>

using namespace std;

struct node {
    long long pre, next;
};

node nodes[100000 + 10];

void insert(long long x, long long y) {
    long long pre = nodes[y].pre, next = nodes[y].next;
    nodes[pre].next = next;
    nodes[next].pre = pre;
    long long aNext = nodes[x].next;
    nodes[x].next = y;
    nodes[y].pre = x;
    nodes[y].next = aNext;
    nodes[aNext].pre = y;
}

void insert_left(long long x, long long y) {
    long long pre = nodes[y].pre, next = nodes[y].next;
    nodes[pre].next = next;
    nodes[next].pre = pre;
    long long aPre = nodes[x].pre;
    nodes[x].pre = y;
    nodes[y].next = x;
    nodes[y].pre = aPre;
    nodes[aPre].next = y;
}

long long sum() {
    long long now = nodes[0].next, pos = 1, sum = 0;
    while (now != 0) {
        if (pos % 2 != 0)
            sum += now;
        now = nodes[now].next;
        pos++;
    }
    return sum;
}

int main() {
    long long n = 0, m = 0, cnt = 1;
    while (cin >> n >> m) {
        memset(nodes, 0, sizeof(node) * (100000 + 10));
        nodes[0].next = 1;
        nodes[0].pre = n;
        for (long long i = 1; i <= n; i++) {
            nodes[i].pre = i - 1;
            nodes[i].next = i + 1;
        }
        nodes[n].next = 0;
        for (long long i = 1; i <= m; i++) {
            long long o, x, y;
            cin >> o >> x >> y;
            if (o == 1)
                insert_left(y, x);
            else
                insert(y, x);
        }
        cout << "Case " << cnt << ": " << sum() << endl;
        cnt++;
    }

    return 0;
}
