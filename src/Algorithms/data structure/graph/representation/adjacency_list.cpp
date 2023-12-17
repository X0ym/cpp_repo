#include <iostream>
#include <vector>

using namespace std;

/*

邻接表：使用一个支持动态增加元素的数据结构构成的数组

    1）使用 vector<int> adj[n + 1] 来存边，adj[u] 存储的是点 u 的所有出边的相关信息
    （终点，边权等）
    2）使用链表，存放边信息

邻接表，对图中每个顶点 v 建立一个线性链表，把所有邻接于 v 的顶点链接到单链表
上，这样对于 n 个顶点的图，其邻接表就是由 n 个单链表组成的


复杂度
    图的初始化和创建：O(n + m)
    查询边是否存在：O(TD(v))
    遍历某个点的所有边：O(TD(v))
    遍历整张图：O(n + m)

    空间复杂度：O(n + m)



*/

int n, m;
vector<bool> vis;
vector<vector<int>> adj;

bool find_edge(int u, int v)
{
    for (int i = 0; i <= adj[u].size(); ++i)
    {
        if (adj[u][i] == v)
            return true;
    }
    return false;
}

void dfs(int u)
{
    if (vis[u])
        return;

    vis[u] = true;
    for (int i = 0; i < adj[u].size(); ++i)
        dfs(adj[u][i]);
}

int main()
{
    cin >> n >> m;

    vis.resize(n + 1, false);
    adj.resize(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    return 0;
}