#include <iostream>
#include <vector>

using namespace std;

void inPlaceMerge(vector<int> &nums, int l, int mid, int r)
{
    int l1 = l, l2 = mid + 1;
    if (nums[mid] <= nums[l2])
        return;

    while (l1 <= mid && l2 <= r)
    {
        if (nums[l1] <= nums[l2])
            l1++;
        else
        {
            // q[l1] > q[l2]
            int tmp = nums[l2];
            int k = l2;
            while (k > l1)
            {
                nums[k] = nums[k - 1];
                k--;
            }
            nums[l1] = tmp;

            // update l1 l2
            l1++;
            mid++;
            l2++;
        }
    }
}

void mergeSort(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return;

    int mid = l + r >> 1;
    cout << "mid=" << mid << endl;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid + 1, r);
    inPlaceMerge(nums, l, mid, r);
}

int main()
{
    return 0;
}