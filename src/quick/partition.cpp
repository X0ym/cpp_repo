//
// Created by Xieym on 2022/10/10.
//

#include<iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

//
int partition(int q[], int l, int r)
{
    int pivot = q[l + r >> 1];
    int i = l - 1, j = r + 1;
    while(i < j)
    {
        do i ++ ; while(q[i] < pivot);
        do j -- ; while(q[j] > pivot);
        if (i < j) swap(q[i], q[j]);
    }
    return j;
}

void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int j = partition(q, l, r);

    /*

        递归处理时
            1）递归 q[l,j] 和 q[j + 1, r] 时，分区函数的返回值不能取到右端点
            不然递归左半部分时，无限递归
            2）递归  q[l, j - 1] 和 q[j, r] 时，分区函数返回值不能取到左

    */
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);

    return;
}

int main()
{
    int q[5] = {3, 1, 2, 4, 5};
    quick_sort(q, 0, 4);
}
