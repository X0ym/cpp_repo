#include <iostream>

using namespace std;

/*

问题模型

给定 N 个物品，其中第 i 个物品的体积为 $V_i$ ，
价值为 $W_i$ 。有一容积为 M 的背包，要求选择一些物品放入背包，
使得物品总体积不超过 M 的前提下，物品的总价值最大。

f[i, j] 表示前 i 个物品，容量为 j 的背包所能达到的最大总价值

f[i, j] = max(f[i - 1][j], f[i - 1][j - w_i] + v_i)


第一个优化：滚动数组

从状态转移方程可以看出，状态仅与第二维有关，去掉第一维
f[i] 表示处理当前物品时，背包容量为 i 的最大价值

f[i] = max(f[i], f[i - w_i] + v_i)



*/



const int N = 1010;
int n, m;
int v[N], w[N];
int f[N][N];

int dp[N];

// 因为 f[i][j] 仅与 f[i - 1][...] 的状态有关，因此可用滚动数组优化空间
// 复杂度
void fn1()
{
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= v[i])
                f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
        }
}

// 使用一维空间维护状态 
void fn2()
{
    for (int i = 1; i <= n; i ++)
        for (int j = m; j >= v[i]; j --)
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];

    



    cout << f[n][m] << endl;
}