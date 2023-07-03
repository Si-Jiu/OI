#include <bits/stdc++.h>

using namespace std;

int main() {
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
