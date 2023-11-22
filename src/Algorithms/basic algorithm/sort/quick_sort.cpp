#include <iostream>
#include <vector>

using namespace std;

void quick_sort1(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return;

    int i = l, j = r, pivot = nums[l + r >> 1];
    while (i <= j)
    {
        while (nums[i] < pivot)
            i++;
        while (nums[j] > pivot)
            j--;
        if (i >= j)
            break;
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
    quick_sort1(nums, l, j);
    quick_sort1(nums, j + 1, r);
}

int partition(int q[], int l, int r, int pivot)
{
    int i = l, j = r;
    while (i <= j)
    {
        while (q[i] < pivot)
            i++;
        while (q[j] > pivot)
            j--;
        if (i >= j)
            break;
        swap(q[i], q[j]);
        i++;
        j--;
    }
    return j;
}

void quick_sort2(int q[], int l, int r)
{
    if (l >= r)
        return;

    int pivot = q[l + r >> 1];
    int j = partition(q, l, r, pivot);
    quick_sort2(q, l, j);
    quick_sort2(q, j + 1, r);
}

void quick_sort3(int q[], int l, int r)
{
    if (l >= r)
        return;

    int j = l, pivot = q[l];
    for (int i = l + 1; i <= r; i++)
        if (q[i] < pivot)
            swap(q[++j], q[i]);
    swap(q[l], q[j]);

    quick_sort3(q, l, j - 1);
    quick_sort3(q, j + 1, r);
}

int main()
{

    return 0;
}