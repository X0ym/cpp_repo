#include <iostream>
#include <vector>

using namespace std;

/*

第一种：闭区间写法，常规写法

要求：nums 非递减，即 nums[i] <= nums[i + 1]。允许重复元素
返回最小满足 nums[i] >= target 的 i。如果不存在则返回 len(nums) nums.size()


第二种：左闭右开区间 [left, right)

*/

int b_search1(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1; // 闭区间 [l, r]
    while (l <= r)                  // 区间不为空
    {
        int mid = l + (r - l) >> 1;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            l = mid + 1; // [mid + 1, r]
        else
            r = mid - 1; // [l, mid - 1]
    }
    return l; // 或 r + 1
}

int b_search2(vector<int> &nums, int target)
{
    int l = 0, r = nums.size();
    while (l < r)
    {
        int mid = l + (r - l) >> 1;
        if (nums[mid] < target)
            l = mid + 1; // [mid + 1, r]
        else
            r = mid; // [l, mid)
    }
    return l;
}

int b_search3(vector<int> &nums, int target)
{
    int l = -1, r = nums.size();
    while (l < r)
    {
        int mid = l +
    }
}

int main()
{

    return 0;
}