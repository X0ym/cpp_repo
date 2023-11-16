#include <iostream>
#include <vector>

using namespace std;

vector<int> pre;

void init(vector<int> &nums)
{
    int n = nums.size();
    pre.resize(n + 1);
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + nums[i];
    }
}

int sumRange(int l, int r)
{
    return pre[r + 1] - pre[l];
}

int main()
{
    vector<int> nums = {1, 2, 4};
    init(nums);

    for (int i = 0; i < pre.size(); i++)
        cout << pre[i] << " ";
    cout << endl;

    return 0;
}