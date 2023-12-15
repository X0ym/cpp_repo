#include <iostream>
#include <vector>

using namespace std;

/*

    边集数组，使用一个数组存储顶点之间的邻接关系，即存储边的信息，数组中
    的每个元素都包含一条边的起点与终点（带边权的图还包含边权）

    复杂度
        查询是否存在某条边: O(m)
        遍历一个点的所有出边: O(m)
        遍历整张图: O(nm)
        空间复杂度 O(m)

    应用
        直接存边的遍历效率低下，一般不用于遍历图
        在 Kruskal 算法中，需要将边按边权排序，需要直接存边
        需要多次建图时，可利用存下的边来建图


*/

// u 起点 v 终点 w 权值
struct Edge
{
    int u, v;
    int w;
};

int n, m;       // n 个顶点，m 条边
vector<Edge> e; // 边集数组
vector<bool> vis;

bool find_edge(int u, int v)
{
    for (int i = 1; i <= m; i++)
        if (e[i].u == u && e[i].v == v)
            return true;
    return false;
}

// u 是起点，遍历整个图
void dfs(int u)
{
    if (vis[u])
        return;
    vis[u] = true;
    for (int i = 1; i <= m; i++ 0)
    {
        if (e[i].u == u)
            dfs(e[i].v);
    }
}

void init1(vector<vector<int>> edges)
{
}

void init2()
{
    cin >> n >> m;
    vis.resize(n + 1, false);
    e.resize(m + 1);

    for (int i = 1; i <= m; ++i)
        cin >> e[i].u >> e[i].v;
}

int main()
{

    return 0;
}