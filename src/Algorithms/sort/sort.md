
# 快排
**算法思想**：分治
算法步骤：
1. 在待排序表 `p[1...n]` 中确定分界点 x ：可选左端点，中间点，右端点，或者随机选取分界点
2. 调整区间（一般 partition 函数）：使得 `p[1...k-1]` 都是小于x 的，`p[k+1...n]` 都是大于等于 x 的
3. 递归处理左右两段，直至每部分内只有一个元素或为空为止

**稳定性**：不稳定，因为在调整范围的时候，相等的元素会被交换位置；
时间复杂度：一般情况下为 O(NlogN)，最坏情况下时间复杂度退化到 O(N)

注意点
1）注意边界
递归处理 `quickSort(q,l,i-1); quickSort(q,i,r);` 时，分界点x不能取到左边界 `q[l]`，可取 `q[r]`，`q[(l+r+1)/2]`，`q[l]` 和 `q[(l+r)/2]` 不能取
2）递归处理 `quickSort(q,l,j);quickSort(q,j+1,r);` 时，分界点 x 不能取右边界 `q[r]`，可取 `q[l]`，`q[(l+r)/2]`，`q[r`] 和 `q[(l+r+1)/2]` 不能取
3）swap 函数，java 语言需要自己写


快排的核心在于如何划分区间
1）分成小于 pivot 和大于等于 pivot 的左右两部分 - 参考 [Lomuto partition scheme](https://en.wikipedia.org/wiki/Quicksort#Lomuto_partition_scheme)
算法导论介绍的就是这种划分方式

2）分成小于等于 pivot 和大于等于 pivot 的左右两部分 - 参考 [Hoare partition scheme](https://en.wikipedia.org/wiki/Quicksort#Hoare_partition_scheme)

划分方式1
```cpp
void quick_sort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int j = l, pivot = q[l];
    for (int i = l + 1; i <= r; i++)
        if (q[i] < pivot)
            swap(q[++j], q[i]);
    swap(q[l], q[j]);

    quick_sort(q, l, j - 1);
    quick_sort(q, j + 1, r);
}

```

划分方式2
```cpp
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l-1, j = r+1;
    int pivot  = q[l + r >> 1];
    while (i < j)
    {
        do i++; while (q[i] < pivot);
        do j--; while (q[j] > pivot);
        if (i < j) swap(q[i], q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j+1, r);
}
```

## 参考

[wikipedia Quicksort](https://en.wikipedia.org/wiki/Quicksort#)


# 归并排序

标准归并
```cpp
void merge(int q[], int l, int r, int mid)
{
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
        if (q[i] <= q[j])
            tmp[k++] = q[i++];
        else
            tmp[k++] = q[j++];
    while (i <= mid)
        tmp[k++] = q[i++];
    while (j <= r)
        tmp[k++] = q[j++];

    for (i = l, j = 0; i <= r; i++, j++)
        q[i] = tmp[j];
}
```

原地归并
```cpp
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
```


# 插入排序

插入排序算法步骤：
1. 从第二个元素开始遍历
2. 对于每个遍历的元素，如果其比前一个元素小，则交换位置，
一直到处理好前面所有元素的大小关系
3. 循环结束，元素全部有序

关键点：遍历每个元素，找到每个元素应该插入的位置

时间复杂度 O(n^2) 空间复杂度 O(1)
稳定性：稳定

代码：
```cpp
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
```