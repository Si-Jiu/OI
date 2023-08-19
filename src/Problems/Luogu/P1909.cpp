#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

unsigned short n;

struct packing {
    unsigned short num, price;
};

bool comp(packing a, packing b) {
    short i = 1, tap;
    while (a.num * i >= n)
        i++;
    tap = a.price * i;
    short j = 1, tbp;
    while (a.num * j >= n)
        j++;
    tbp = a.price * i;
    if (tap == tbp)
        return tap > tbp;

    return tap < tbp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    packing pencils[3];
    cin >> n >> pencils[0].num >> pencils[0].price >> pencils[1].num >>
        pencils[1].price >> pencils[2].num >> pencils[2].price;
    sort(pencils, pencils + 3, comp);
    int i = 1;
    while (pencils[0].price * i >= n)
        i++;
    i--;
    cout << i * pencils[0].price;

    return 0;
}
