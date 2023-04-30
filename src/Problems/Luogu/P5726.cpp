#include <bits/stdc++.h>

using namespace std;

short n;

short array_max_min(short *array, bool chooseMinMax)
{
    short Index = -1, Value;
    if (chooseMinMax)
        Value = -1;
    else
        Value = 11;
    for (short i = 0; i < n; i++)
    {
        if (chooseMinMax)
        {
            if (array[i] > Value)
            {
                Value = array[i];
                Index = i;
            }
        }
        else
        {
            if (array[i] < Value)
            {
                Value = array[i];
                Index = i;
            }
        }
    }
    return Index;
}

int main()
{
    scanf("%hd", &n);
    short judges[n];
    for (short i = 0; i < n; i++)
        scanf("%hd", &judges[i]);
    short mx = array_max_min(judges, false), mn = array_max_min(judges, true), count = 0;
    for (short i = 0; i < n; i++)
    {
        if (i == mx || i == mn)
            continue;
        count += judges[i];
    }
    printf("%.2f", count * 1.0 / (n - 2));

    return 0;
}
