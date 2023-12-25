#include <iostream>
#include <vector>

using namespace std;

/*

多源汇最短路

floyd 算法：求任意两个顶点之间的最短路

适用于任何图，不管有向无向，边权正负，但是最短路必须存在。（不能有个负环）

*/

const int N = 210, INF = 1e9;

int n, m;
int d[N][N];

void init()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j)
                d[i][j] = 0; // 自环
            else
                d[i][j] = INF;
}

// 建边
// d[a][b] = min(d[a][b], c); // 处理重边，取边权较小

void floyd()
{
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]); // 重边，取边权小的
}

int main()
{
    return 0;
}