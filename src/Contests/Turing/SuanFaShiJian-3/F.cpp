#include <bits/stdc++.h>

using namespace std;

int main() {
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(0, 2);
    int i = distr(eng);
    while (i == 1)
        i = distr(eng);
    cout << i << endl;

    return 0;
}
