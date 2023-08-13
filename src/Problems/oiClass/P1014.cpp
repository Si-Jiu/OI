#include <bits/stdc++.h>

using namespace std;

int main() {
    double weight;
    cin >> weight;
    printf("%.2lf", 2.5 + (weight > 10 ? (weight - 10) * 1.5 : 0));

    return 0;
}
