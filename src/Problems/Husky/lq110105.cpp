#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<float, string> jieQi;
    jieQi[1.05] = "XH";
    jieQi[1.20] = "DH";
    jieQi[2.04] = "LC";
    jieQi[2.19] = "YS";
    jieQi[3.05] = "JZ";
    jieQi[3.20] = "CF";
    jieQi[4.04] = "QM";
    jieQi[4.19] = "GY";
    jieQi[5.05] = "LX";
    jieQi[5.20] = "XM";
    jieQi[6.05] = "MZ";
    jieQi[6.21] = "XZ";
    jieQi[7.06] = "XS";
    jieQi[7.22] = "DS";
    jieQi[8.07] = "LQ";
    jieQi[8.22] = "CS";
    jieQi[9.07] = "BL";
    jieQi[9.22] = "QF";
    jieQi[10.08] = "HL";
    jieQi[10.23] = "SJ";
    jieQi[11.07] = "LD";
    jieQi[11.22] = "XX";
    jieQi[12.07] = "DX";
    jieQi[12.21] = "DZ";
    short m, n;
    cin >> m >> n;
    float date = m + n * 0.01;
    if (date > 12.21) {
        cout << "XH" << endl;
        return 0;
    }
    for (auto p : jieQi)
        if (p.first >= date) {
            cout << p.second << endl;
            return 0;
        }

    return 0;
}
