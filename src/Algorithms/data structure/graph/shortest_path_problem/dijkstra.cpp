#include <iostream>
#include <vector>
#include <memory.h>
#include <queue>

using namespace std;

/*

Dijkstra 算法是一种求解非负权图上，单源最短路径的算法



*/

const int maxn = 100010;

struct edge
{
    int v, w;
};

struct node
{
    int dis, u;

    bool operator>(const node &a) const { return dis > a.dis; }
};

vector<edge> e[maxn];
int dis[maxn], vis[maxn];
priority_queue<node, vector<node>, greater<node>> q;

// 暴力实现
void dijkstra(int n, int s)
{
    memset(dis, 63, sizeof(dis));
    dis[s] = 0;
    for (int i = 1; i <= n; i++)
    {
        int u = 0, mind = 0x3f3f3f3f;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && dis[j] < mind)
                u = j, mind = dis[j];
        vis[u] = true;
        for (auto ed : e[u])
        {
            int v = ed.v, w = ed.w;
            if (dis[v] > dis[u] + w)
                dis[v] = dis[u] + w;
        }
    }
}

// 优先队列实现
void dijkstra2(int n, int s)
{
    memset(dis, 63, sizeof(dis));
    dis[s] = 0;
    q.push({0, s});
    while (!q.empty())
    {
        int u = q.top().u;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        for (auto ed : e[u])
        {
            int v = ed.v, w = ed.w;
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                q.push({dis[v], v});
            }
        }
    }
}

int main()
{

    return 0;
}