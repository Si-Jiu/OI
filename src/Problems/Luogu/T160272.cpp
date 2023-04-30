#include <bits/stdc++.h>

using namespace std;

struct stu
{
    string name;
    short score;
};

bool comp(stu a, stu b)
{
    if (a.score == b.score)
    {
        return a.name < b.name;
    }
    return a.score > b.score;
}

int main()
{
    // 变量和输入
    short n, k;
    cin >> n >> k;
    stu students[n];
    for (short index = 0; index < n; index++)
    {
        cin >> students[index].name >> students[index].score;
    }

    // 排序
    sort(students, students + n, comp);

    // 输出
    cout << students[k - 1].name;

    return 0;
}
