#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int> numbers;
    int n;
    cin >> n;
    while (n--) {
        int add;
        cin >> add;
        numbers.push(add);
    }
    while (numbers.size() > 1) {
        int tmp = numbers.top();
        numbers.pop();
        tmp -= numbers.top();
        numbers.pop();
        if (tmp != 0)
            numbers.push(tmp);
    }

    return 0;
}
