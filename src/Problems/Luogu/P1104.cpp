#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct student {
    string s;
    int y, m, d, c;
};

bool comp(const student &a, const student &b) {
    if (a.y == b.y) {
        if (a.m == b.m)
            if (a.d == b.d)
                return a.c > b.c;
            else
                return a.d < b.d;
        else
            return a.m < b.m;
    } else
        return a.y < b.y;
}

int main() {
    int n;
    cin >> n;
    student students[n];
    for (int i = 0; i < n; i++) {
        cin >> students[i].s >> students[i].y >> students[i].m >> students[i].d;
        students[i].c = i;
    }
    sort(students, students + n, comp);
    for (int i = 0; i < n; i++)
        cout << students[i].s << endl;

    return 0;
}
