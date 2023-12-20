#include <iostream>

using namespace std;

int t, m;
int tcost[101], mget[101];
int ans = 0;

void dfs(int pos, int tleft, int tans)
{
    if (tleft < 0)
        return;
    if (pos == m + 1)
    {
        ans = max(ans, tans);
        return;
    }
    dfs(pos + 1, tleft, tans);
    dfs(pos + 1, tleft - tcost[pos], tans + mget[pos]);
}

int main()
{
    cin >> t >> m;
    for (int i = 1; i <= m; i++)
        cin >> tcost[i] >> mget[i];
    dfs(1, t, 0);
    cout << ans << endl;
    return 0;
}