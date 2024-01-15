#include <iostream>
#include <algorithm>

using namespace std;

/*

完全背包    Unbounded Knapsack Problem



*/

const int N = 1010;
int n, m;
int v[N], w[N];
int f[N][N];

int dp[N];

void fn1()
{
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= v[i])
                f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);
        }
}

void fn2()
{
    for (int i = 1; i <= n; i++)
        for (int j = v[i]; j <= m; j++)
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
}

int main()
{

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];

    for (int i = 1; i <= n; i++)
        for (int j = v[i]; j <= m; j++)
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);

    cout << dp[m] << endl;

    return 0;
}