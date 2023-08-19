#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct candy {
    int w, p;
    double m;
};

bool comp(const candy &a, const candy &b) {
    return a.m < b.m;
}

int main() {
    int n, num;
    cin >> n >> num;
    candy candy1[n];
    for (int i = 0; i < n; i++) {
        cin >> candy1[i].w >> candy1[i].p;
        candy1[i].m = 1.0 * candy1[i].p / candy1[i].w;
    }
    sort(candy1, candy1 + n, comp);
    double sum = 0;
    for (int i = 0; i < n && num > 0; i++) {
        if (num / candy1[i].m >= candy1[i].w) {
            sum += candy1[i].w;
            num -= candy1[i].p;
        } else {
            sum += num / candy1[i].m;
            num -= candy1[i].m * (num / candy1[i].m);
        }
    }
    printf("%.2lf", sum);

    return 0;
}
