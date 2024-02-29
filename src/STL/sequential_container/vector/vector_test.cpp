#include <iostream>
#include <vector>

using namespace std;

void print_matrix(vector<vector<int>> &maxtrix)
{
    int m = maxtrix.size(), n = maxtrix[0].size();
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << maxtrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> ans;
    vector<int> path = {1, 2};
    ans.push_back(path);
    print_matrix(ans);

    path.push_back(4);

    print_matrix(ans);
}