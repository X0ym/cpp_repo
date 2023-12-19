#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*

有向无环图 - 也被称为拓扑图，简称 DAG 图
拓扑序列，拓扑排序

AOV(Activity On Vertex Network) 网：用 DAG 图表示一个工程，其顶点表示活动，
用有向边 <u, v> 表示活动 u 必须先于活动 v 进行的这样一种关系，则将这样有向图
称为 【顶点表示活动的网络】, 即 AOV 网。

拓扑排序定义为：拓扑排序是对有向无环图的顶点的一种排序，使得若存在一条顶点 A 到
顶点 B 的路径，则在排序中顶点 B 出现在顶点 A 的后面。

每个 AOV 网都有一个或多个拓扑排序序列。

对一个 AOV 网进行拓扑排序，常用方法：Kahn 算法
1. 从 AOV 网中选择一个没有前驱的顶点并输出，即入度为 0 的顶点
2. 删除该顶点和所有以它为起点的有向边
重复前两部，直到当前的 AOV 网为空或当前网中不存在无前驱的顶点位置（说明：有向图中
必然存在环）

入度为 0 的顶点可作为起点

Kahn 算法步骤：
1. 初始状态：集合 S 保存所有入度为 0 的顶点，L 是一个空列表。
2. 每次从 S 中取出一个点 u 放入 L，然后将 u 所有的出边 删除，其中对于每个出边
如 <u, v> ，如果删除出边，顶点 v 的入度为 0，则将 v 放入 S 中
3. 不断重复第二步，直到不存在入度为 0 的顶点，即 S 为空。如果图中还存在入度不为 0 的顶点
则说明图是有环图

时间复杂度 O(E + V)

伪代码如下：
```
L ← Empty list that will contain the sorted elements
S ← Set of all nodes with no incoming edges
while S is not empty do
    remove a node n from S
    insert n into L
    for each node m with an edge e from n to m do
        remove edge e from the graph
        if m has no other incoming edges then
            insert m into S
if graph has edges then
    return error (graph has at least one cycle)
else
    return L (a topologically sorted order)
```

应用
1. 拓扑排序可以判断图中是否有环
2. 判断图是否是一条链
3. 拓扑排序可以用来求 AOE 网中的关键路径，估算工程完成的最短时间

求字典序最大或最小的拓扑序列
将 Kahn 算法中的队列换成最大堆或最小堆实现的优先队列即可，总时间复杂度为
O(E + VlogV)



*/

const int MAXN = 100010;

int n, m; // n 个顶点 m 条边
vector<int> G[MAXN];
int in[MAXN]; // 存储每个结点的入度

bool toposort()
{
    vector<int> L;
    queue<int> S;
    for (int i = 1; i <= n; i++)
        if (in[i] == 0)
            S.push(i);
    while (!S.empty())
    {
        int u = S.front();
        S.pop();
        L.push_back(u);

        for (auto v : G[u])
        {
            if (--in[v] == 0)
            {
                S.push(v);
            }
        }
    }
    if (L.size() == n)
    {
        // 拓扑排序成功，存在拓扑序列
        for (auto i : L)
            cout << i << ' ';
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    return 0;
}