#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct node {
    int pre, next;
    char val;
};

node nodes[100 + 10];
string i;

void del(int pos) {
    nodes[nodes[pos].pre].next = nodes[pos].next;
    nodes[nodes[pos].next].pre = nodes[pos].pre;
}

int main() {
    cin >> i;
    for (int j = 0; j < i.size(); j++) {
        
    }

    return 0;
}
