#include <iostream>
#include <algorithm>

using namespace std;

/*

多重背包问题


f[i][j] = max(f[i-1][j - v[i] * k] + w[i] * k)
其中 k = [0, s[i]]



*/

const int N = 110;
int n, m;
int v[N], w[N], s[N];
int f[N][N];

int dp[N];

/*
    朴素
*/
void fn1()
{
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
            for (int k = 0; k <= s[i] && j >= v[i] * k; k++)
                f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + w[i] * k);
}

/*

优化：转化为 0-1 背包



*/
void fn2()
{
    
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i] >> s[i];

    // cout << f[n][m] << endl;
    return 0;
}