#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, d, m, f;
    cin >> k >> d >> m >> f;
    priority_queue<int> door, back, middle, front;
    for (int i = 0; i < k; i++) {
        int tmp;
        scanf("%d", &tmp);
        door.push(tmp);
    }
    for (int i = 0; i < d; i++) {
        int tmp;
        scanf("%d", &tmp);
        back.push(tmp);
    }
    for (int i = 0; i < m; i++) {
        int tmp;
        scanf("%d", &tmp);
        middle.push(tmp);
    }
    for (int i = 0; i < f; i++) {
        int tmp;
        scanf("%d", &tmp);
        front.push(tmp);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int b, m, f;
        scanf("%d %d %d", &b, &m, &f);
        unsigned long long sum = door.top(), sum2 = 1 + b + m + f;
        door.pop();
        for (int b1 = 0; b1 < b; b1++) {
            sum += back.top();
            back.pop();
        }
        for (int m1 = 0; m1 < m; m1++) {
            sum += middle.top();
            middle.pop();
        }
        for (int f1 = 0; f1 < f; f1++) {
            sum += front.top();
            front.pop();
        }
        printf("%.2lf\n", 1.0 * sum / sum2);
    }

    return 0;
}
