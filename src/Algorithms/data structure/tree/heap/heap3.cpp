#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

int h[N], size;
int n, m;

void up(int x)
{
    while (x > 1 && h[x] < h[x / 2])
    {
        swap(h[x], h[x / 2]);
        x = x / 2;
    }
}

void down(int x)
{
    while (x * 2 <= n)
    {
        int t = x * 2;
        if (t + 1 <= n && h[t + 1] < h[t])
            t++;
        if (h[t] >= h[x])
            break;
        swap(h[x], h[t]);
        x = t;
    }
}
