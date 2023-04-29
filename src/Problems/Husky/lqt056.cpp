#include <bits/stdc++.h>
#define llong long long
#define float double
// OI千万题,longlong第一题,类型不规范,RE两行泪

using namespace std;

const int LEN = 20 + 10;

int jinHua[][2] = {{-2, -2}, {-2, -1}, {-2, +1}, {-2, +2}, {-1, -2}, {-1, +2},
                   {+1, -2}, {+1, +2}, {+2, -2}, {+2, -1}, {+2, +1}, {+2, +2}};
struct pos
{
    int x, y;
};

int main()
{
    for (short i = 0; i < 2; i++)
    {
        pos a;
        cin >> a.x >> a.y;
        int chessboard[LEN][LEN];
        queue<pos> shanDingDongRen;
        shanDingDongRen.push(a);
        memset(chessboard, -1, sizeof(chessboard));
        chessboard[a.x][a.y] = 0;
        while (!shanDingDongRen.empty())
        {
            pos zuXian = shanDingDongRen.front();
            shanDingDongRen.pop();
            if (zuXian.x == 1 && zuXian.y == 1 && chessboard[zuXian.x][zuXian.y] != -1)
            {
                cout << chessboard[zuXian.x][zuXian.y] << endl;
                break;
            }
            for (int i = 0; i < 12; i++)
            {
                pos aiYinSiTan = zuXian;
                aiYinSiTan.x += jinHua[i][0];
                aiYinSiTan.y += jinHua[i][1];
                if (aiYinSiTan.x >= 0 && aiYinSiTan.x <= 20 && aiYinSiTan.y >= 0 && aiYinSiTan.y <= 20 &&
                    chessboard[aiYinSiTan.x][aiYinSiTan.y] == -1)
                {
                    chessboard[aiYinSiTan.x][aiYinSiTan.y] = chessboard[zuXian.x][zuXian.y] + 1;
                    shanDingDongRen.push(aiYinSiTan);
                }
            }
        }
    }

    return 0;
}
