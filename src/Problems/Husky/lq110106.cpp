#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, short> rubbishes;
    short n;
    rubbishes["FOOD WASTE"] = 0;
    rubbishes["RECYCLABLE"] = 0;
    rubbishes["HAZARDOUS"] = 0;
    rubbishes["RESIDUAL WASTE"] = 0;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        string rubbish;
        getline(cin, rubbish);
        if (rubbish == "leaves" || rubbish == "watermelon peel" ||
            rubbish == "leftovers")
            rubbishes["FOOD WASTE"]++;
        else if (rubbish == "paper box" || rubbish == "plastic bottle" ||
                 rubbish == "clothes")
            rubbishes["RECYCLABLE"]++;
        else if (rubbish == "rechargeable battery" ||
                 rubbish == "abandoned medicine" || rubbish == "disinfectant")
            rubbishes["HAZARDOUS"]++;
        else if (rubbish == "mask" || rubbish == "battery" ||
                 rubbish == "plastic bag")
            rubbishes["RESIDUAL WASTE"]++;
    }
    for (auto r : rubbishes) {
        cout << r.first << endl;
        cout << r.second << endl;
        break;
    }

    return 0;
}
