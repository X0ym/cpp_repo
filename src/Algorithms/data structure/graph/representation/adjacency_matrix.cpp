#include <iostream>
#include <vector>
#include <climits>

// #define inf INT_MAX;
#define inf 0x7ffff

using namespace std;

/*

邻接矩阵（Adjacency Matrix）：使用一个二维数组 adj 来存储顶点之间的邻接关系
    - 无权图，其中 adj[u][v] 为 1 表示存在 u 到 v 的边，为 0 表示不存在
    - 带边权的图，可以在 adj[u][v] 中存储 u 到 v 的边的边权，adj[u][v]
        为无穷大代表顶点 u 与 v 之间没有边

复杂度
    初始化：O(n^2)
    查询是否存在某条边：O(1)
    遍历一个点的所有出边：O(n)
    遍历整张图：O(n^2)

    空间复杂度：O(n^2)

应用
    邻接矩阵只适用于没有重边（或重边可忽略）的情况，显著的优点是可以快速查询一条
    边是否存在

    邻接矩阵在稀疏图上效率很低，当顶点较多时，空间太大
    一般只在稠密图上使用邻接矩阵


*/

int n, m;                // n 个顶点 m 条边
vector<bool> vis;        // 记录顶点是否被访问过
vector<vector<int>> adj; // 邻接矩阵

bool find_edge(int u, int v)
{
    return adj[u][v];
}

void dfs(int u)
{
    if (vis[u])
        return;

    vis[u] = true;
    for (int v = 1; v <= n; ++v)
        if (adj[u][v])
            dfs(v);
}

int main()
{
    cin >> n >> m;

    vis.resize(n + 1, false);
    adj.resize(n + 1, vector<int>(n + 1, inf));

    for (int i = 1; i <= m; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
    }

    return 0;
}