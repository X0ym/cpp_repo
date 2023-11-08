#include <iostream>
#include <vector>

using namespace std;

void insert_sort1(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && nums[j] < nums[j - 1])
        {
            swap(nums[j], nums[j - 1]);
            j--;
        }
    }
}

void insert_sort2(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0 && nums[j] < nums[j - 1]; j--)
            swap(nums[j], nums[j - 1]);
    }
}

int main()
{
    return 0;
}