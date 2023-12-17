#include <iostream>
#include <vector>

using namespace std;

/*

王道考研

当图为稀疏图时，邻接矩阵浪费了大量的存储空间

邻接表
    对图 G 中的每个顶点 v 建立一个单链表，第 i 个单链表中的结点表示
    邻接于顶点 v 的边（对于有向图则是以顶点 v 为尾的弧）

    这个单链表称为顶点 v 的边表（对于有向图则称为出边表）




*/

struct Edge
{
    int v;
    int w; // 权值
};

int n, m;
vector<bool> vis;
vector<vector<Edge>> adj;

void add_edge(int u, int v)
{
    adj[u].push_back(Edge{v : v});
}

bool find_edge(int u, int v)
{
    for (int i = 0; i < adj.size(); ++i)
    {
        if (adj[u][i].v == v)
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
        if (!vis[adj[u][i].v])
            dfs(adj[u][i].v);
}

int main()
{
    return 0;
}