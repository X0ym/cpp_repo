#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>

using namespace std;

/*

spfa 是 Bellman–Ford 算法的一种实现
即 Shortest Path Faster Algorithm，
队列优化的 Bellman-Ford 算法

平均时间复杂度 O(m)，最坏 O(nm)

*/

const int maxn = 100010;

struct edge
{
    int v, w;
};

vector<edge> e[maxn];
int dis[maxn], cnt[maxn], vis[maxn];
queue<int> q;

bool spfa(int n, int s)
{
    memset(dis, 63, sizeof(dis));
    dis[s] = 0, vis[s] = 1;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop(), vis[u] = 0;
        for (auto ed : e[u])
        {
            int v = ed.v, w = ed.w;
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                cnt[v] = cnt[u] + 1; // 记录最短路经过的边数
                if (cnt[v] >= n)
                    return false;
                // 在不经过负环的情况下，最短路至多经过 n - 1 条边
                // 因此如果经过了多于 n 条边，一定说明经过了负环
                if (!vis[v])
                    q.push(v), vis[v] = 1;
            }
        }
    }
    return true;
}

int main()
{
    return 0;
}