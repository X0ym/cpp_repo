#include <iostream>
#include <vector>
#include <queue>

#define inf 0x7ffff

using namespace std;

/*

图的遍历算法是求解图的连通性问题，拓扑排序和求关键路径等算法的基础

图的任意一个顶点都可能与其余的顶点相邻接，所以在访问某个顶点后，可能沿着
某条路径搜索回到该顶点。为避免同一顶点被访问多次，在遍历图的过程中，必须
记录每个已经访问过的顶点。

图的遍历算法主要有两种：广度优先搜索和深度优先搜索


图的遍历 - 广度优先搜索

Dijkstra 单源最短路径算法和 Prim 最小生成树算法也应用了类似的思想

广度优先算法是一种分层的查找过程，需要借助一个辅助队列，以记录正在访问的
顶点的下一层顶点

BFS 算法性能分析

无论是邻接表还是邻接矩阵的存储方式，都需要借助辅助队列，n 个顶点都需要
入队一次，最坏的情况下，空间复杂度为 O(|V|)

邻接表存储方式，每个顶点均需搜索一次，时间复杂度为 O(|V|)，在搜索任意一个
顶点的邻接点时，每条边至少访问一次，时间复杂度是 O(|E|)，算法总时间复杂度
为 O(|V| + |E|)

邻接矩阵存储方式，查找每个顶点的邻接点时间复杂度为 O(|V|)，算法总时间复杂
度为 O(|V|^2)


BFS 算法求解单源最短路径问题

如果图 G = (V, E) 是无权图，定义从顶点 u 到顶点 v 的最短路径 d(u, v)
为从顶点 u 到顶点 v 的任意路径中最少的边数；如果从 u 到 v 没有通路，则
d(u, v) = ∞




*/

// 邻接矩阵
int n, m;
vector<bool> vis;
vector<vector<int>> adj;
vector<int> d; // 存储最短路径

//
void visit(int u) {}

void bfs(int u)
{
    queue<int> q;

    visit(u);
    vis[u] = true;
    q.push(u);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 1; i <= n; ++i)
        {
            if (adj[x][i] && !vis[adj[x][i]])
            {
                visit(adj[x][i]);
                d[i] = d[x] + 1;
                vis[i] = true;
                q.push(i);
            }
        }
    }
}

vector<int> bfs_min_distance(int u)
{
}

int main()
{
    cin >> n >> m;

    vis.resize(n + 1, false);
    adj.resize(n + 1, vector<int>(n + 1, 0));
    d.resize(n + 1);

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
    }

    return 0;
}