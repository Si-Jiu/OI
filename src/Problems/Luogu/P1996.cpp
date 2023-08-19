#include <bits/stdc++.h>

using namespace std;

struct Node {
    int pre; // 前一个结点是 node[ pre ]
    int nxt; // 下一个结点是 node[ nxt ]
};
Node node[1005];

// 插入：在 node[p] 的右边插入 node[x]
void insertNode(int p, int x) {
    int p2 = node[p].nxt; // 提前存好 p 的下一个结点
    // p <-> x
    node[p].nxt = x;
    node[x].pre = p;
    // x <-> p2
    node[x].nxt = p2;
    node[p2].pre = x;
}

// 删除：删除结点 node[x]
void deleteNode(int x) {
    if (node[x].pre == -1) { // 已经被删除过
        return;
    }
    int p1 = node[x].pre; // x 本来前面是谁
    int p2 = node[x].nxt; // x 本来后面是谁
    // p1 <-> p2
    node[p1].nxt = p2;
    node[p2].pre = p1;
    // 标记 x 已经被删除过一次
    node[x].pre = -1;
    node[x].nxt = -1;
}

// 遍历：输出链表每一个结点的值
void traverse() {
    int cur = node[0].nxt; // 整个链表第一个结点
    // 当前走到的结点 ： node[cur]
    // 当前结点的数据： cur
    // 当前结点的下一个：node[cur].nxt
    while (cur != 0) {
        cout << cur << ' '; // 输出当前结点的数值
        cur = node[cur].nxt;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    int n, m;
    cin >> n >> m;
    for (int i = 1; i < n; i++) {
        node[i].nxt = i + 1;
        node[i + 1].pre = i;
    }
    node[1].pre = n;
    node[n].nxt = 1;

    int cur = 1; // 从第 1 人报数
    for (int i = 1; i <= n * m; i++) {
        int cpyNxt = node[cur].nxt;
        if (i % m == 0) { // 报到的号是 m 的倍数，有人报了 m
            cout << cur << ' ';
            deleteNode(cur);
        }
        cur = cpyNxt; // 向下一个报数的人移动
    }

    return 0;
}
