#include <bits/stdc++.h>

using namespace std;

int main() {
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(1, 2);
    cout << distr(eng) << endl;

    return 0;
}
