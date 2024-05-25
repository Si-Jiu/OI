#include <bits/stdc++.h>
#define endl '\n'

struct Student {
    short Chinese, Maths, English, sum;
};

Student students[1000 + 10];
int n, cnt = 0;

using namespace std;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> students[i].Chinese >> students[i].Maths >> students[i].English;
        students[i].sum =
            students[i].Chinese + students[i].Maths + students[i].English;
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((abs(students[i].Chinese - students[j].Chinese) <= 5) &&
                (abs(students[i].Maths - students[j].Maths) <= 5) &&
                (abs(students[i].English - students[j].English) <= 5) &&
                (abs(students[i].sum - students[j].sum) <= 10))
                cnt++;
    cout << cnt << endl;

    return 0;
}
