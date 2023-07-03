#include <bits/stdc++.h>

using namespace std;

struct student {
    short id, chinese, maths, english, total;
};

bool comp(const student &a, const student &b) {
    if (a.total == b.total)
        if (a.chinese == b.chinese)
            return a.id < b.id;
        else
            return a.chinese > b.chinese;
    else
        return a.total > b.total;
}

int main() {
    short n;
    cin >> n;
    student students[n];
    for (short i = 0; i < n; i++) {
        students[i].id = i + 1;
        cin >> students[i].chinese >> students[i].maths >> students[i].english;
        students[i].total =
            students[i].chinese + students[i].maths + students[i].english;
    }
    sort(students, students + n, comp);
    for (short i = 0; i < 5; i++)
        cout << students[i].id << ' ' << students[i].total << endl;

    return 0;
}
