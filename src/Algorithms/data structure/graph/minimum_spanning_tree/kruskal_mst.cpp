#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*

Kruskal 算法
Kruskal 算法是一种常见并且好写的最小生成树算法，由 Kruskal 发明。
该算法的基本思想是从小到大加入边，算法思想是贪心算法。



*/

const int N = 100010, M = 200010, inf = 0x3f3f3f3f;

struct edge
{
    int u, v, w;
} edges[M];

int n, m;
int p[N];

int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

int kruskal()
{
    sort(edges, edges + m);

    for (int i = 1; i <= n; i++)
        p[i] = i;

    int res = 0, cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int u = edges[i].u, v = edges[i].v, w = edges[i].w;
        u = find(u), v = find(v);
        if (u != v)
        {
            p[u] = v;
            res += w;
            cnt++;
        }
    }
    if (cnt < n - 1)
        return inf;
    return res;
}

int main()
{

    return 0;
}