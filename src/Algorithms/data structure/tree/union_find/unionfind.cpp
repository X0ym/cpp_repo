#include <iostream>
using namespace std;

const int N = 100010;

/*

并查集

    初始化：每个元素都属于一个单独的集合，表示为一颗只有根节点的树。
    初始时，将根节点的父节点设置为自己




*/

// 树的存储方式：只记录父节点 常用于自底向上的递推问题中
int n;
int p[N];

// 返回 x 的祖宗节点 + 路径压缩
int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

// 将一棵树的根节点连到另一棵树的根节点
void unite(int a, int b)
{
    p[find(a)] = find(b);
}

int main()
{
    // 初始化1 每个结点都在单独的一个集合中
    for (int i = 1; i <= n; i++)
        p[i] = i;

    return 0;
}

/*

*/