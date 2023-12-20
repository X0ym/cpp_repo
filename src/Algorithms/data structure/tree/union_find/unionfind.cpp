#include <iostream>
using namespace std;

const int N = 100010;

// 树的存储方式：只记录父节点 常用于自底向上的递推问题中
int p[N];

int find(int x) // 返回 x 的祖宗节点 + 路径压缩
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

int n;

int main()
{
    // 初始化1
    for (int i = 1; i <= n; i++)
        p[i] = i;
}

/*

*/