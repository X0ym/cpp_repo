#include <iostream>
#include <vector>

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

void 

int main()
{

    

    return 0;
}