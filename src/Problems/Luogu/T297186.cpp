#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct node {
    int pre, next;
};

node nodes[1000000];

void insert(int a, int b) {
    int aNext = nodes[a].next;
    nodes[a].next = b;
    nodes[b].pre = a;
    nodes[b].next = aNext;
    nodes[aNext].pre = b;
}

void del(int x) {
    int pre = nodes[x].pre, next = nodes[x].next;
    nodes[pre].next = next;
    nodes[next].pre = pre;
}

void print() {
    int now = nodes[0].next;
    while (now != 0) {
        cout << now << ' ';
        now = nodes[now].next;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    nodes[0].pre = 0;
    nodes[0].next = 0;
    for (int i = 0; i < q; i++) {
        string o;
        cin >> o;
        if (o == "insert") {
            int a, b;
            cin >> a >> b;
            insert(a, b);
        } else if (o == "delete") {
            int x;
            cin >> x;
            del(x);
        } else
            print();
    }

    return 0;
}
