#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

/*

Bellman–Ford 算法是一种基于松弛（relax）操作的最短路算法，
可以求出有负权的图的最短路，并可以对最短路不存在的情况进行判断。

*/

const int maxn = 100010;
const int inf = 0x3f3f3f3f;

struct edge
{
    int v, w;
};

vector<edge> e[maxn]; // 邻接表存图

// u 起点 v 终点 w 权值
struct Edge
{
    int u, v, w;
};

vector<Edge> edges; // 边集数组存图
int n, m;           // n 表示点数，m 表示边数
int dis[maxn];

bool bellmanford(int n, int s)
{
    memset(dis, 0x3f, sizeof(dis));
    dis[s] = 0;

    // 判断遍历一轮所有边过程中是否发生松弛操作
    bool flag;
    for (int i = 1; i <= n; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            if (dis[u] == inf)
                continue;
            for (auto ed : e[u])
            {
                int v = ed.v, w = ed.w;
                if (dis[v] > dis[u] + w)
                {
                    dis[v] = dis[u] + w;
                    flag = true;
                }
            }

            // 不存在可松弛的边时停止
            if (!flag)
                break;
            // 第 n 轮循环后仍可松弛说明从 s 可以抵达一个负环
            return flag;
        }
    }
}

int bellmanford2(int n, int s)
{
    memset(dis, 0x3f, sizeof(dis));
    dis[s] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int u = edges[j].u, v = edges[j].v, w = edges[j].w;
            if (dis[v] > dis[u] + w)
                dis[v] = dis[u] + w;
        }
    }
}

int main()
{
    return 0;
}