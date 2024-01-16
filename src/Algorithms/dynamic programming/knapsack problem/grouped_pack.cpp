#include <iostream>
#include <algorithm>

using namespace std;

const int N = 110;

int n, m;
int v[N][N], w[N][N], cnt[N]; // cnt 每组物品的个数
int f[N];

/*

对每组物品进行一次 0-1 背包的选择过程即可

状态转移方程
    f[i][j] = max(f[i - 1][j], f[i - 1][j - v[i][k]] + w[i][k])

for (int i = 1; i <= n; i++)
        for (int j = m; j >= 0; j--)
            for (int k = 0; k < cnt[i]; k++)
                if (v[i][k] <= j)
                    f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);


*/

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> cnt[i];
        for (int j = 0; j < cnt[i]; j++)
            cin >> v[i][j] >> w[i][j];
    }

    for (int i = 1; i <= n; i++)
        for (int j = m; j >= 0; j--)
            for (int k = 0; k < cnt[i]; k++)
                if (v[i][k] <= j)
                    f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);

    cout << f[m] << endl;

    return 0;
}