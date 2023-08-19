#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct people {
    int time;
    short num;
};

bool comp(const people &a, const people &b) {
    return a.time < b.time;
}

int main() {
    short n;
    cin >> n;
    people time[n];
    for (short index = 0; index < n; index++) {
        cin >> time[index].time;
        time[index].num = index + 1;
    }
    sort(time, time + n, comp);
    unsigned long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += time[i].time * (n - i - 1);
        std::cout << time[i].num << ' ';
    }
    printf("\n%.2lf", sum * 1.0 / n);

    return 0;
}
