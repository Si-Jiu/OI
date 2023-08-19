#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(0, 2);
    int i = distr(eng);
    while (i == 1)
        i = distr(eng);
    cout << i << endl;

    return 0;
}
