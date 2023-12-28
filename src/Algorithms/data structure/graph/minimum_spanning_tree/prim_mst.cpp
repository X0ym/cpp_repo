#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

/*

Prim 算法是另一种常见并且好写的最小生成树算法。
该算法的基本思想是从一个结点开始，不断加点（而不是 Kruskal 算法的加边）。

朴素 O(n^2)
二叉堆优化 O()

*/

const int N = 510, inf = 0x3f3f3f3f;

int n, m;    // n 个顶点
int g[N][N]; // 邻接矩阵存图
int dis[N];  // 每个点到当前最小生成树的距离
bool vis[N]; // 记录每个顶点是否已经加入最小生成树

// 如果图不连通，返回 inf，否则返回最小生成树的边权之和
int prim()
{
    // 初始化 dis
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0;

    int res = 0;
    // 遍历 n 次，需遍历到图中每个顶点
    for (int i = 0; i < n; i++)
    {
        // 寻找未加入最小生成树的点集中距离最小的顶点
        int t = -1;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && (t == -1 || dis[j] < dis[t]))
                t = j;
        // 如果顶点不连通说明不存在最小生成树
        if (dis[t] == inf)
            return inf;
        vis[t] = true;
        res += dis[t];

        // 更新顶点到最小生成树的距离（其实不用再更新已加入的顶点，因为已加入的顶点不影响结果）
        for (int j = 1; j <= n; j++)
            dis[j] = min(dis[j], g[t][j]);
    }

    return res;
}

int main()
{
    cin >> n >> m;
    memset(g, 0x3f, sizeof g);
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u][v] = g[v][u] = min(g[u][v], w); // 处理重边
    }

    int res = prim();
    if (res == inf)
        cout << "impossible";
    else
        cout << res;

    return 0;
}