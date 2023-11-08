#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int a[N], tmp[N];

void shift(int q[], int l, int r)
{
}

// 原地归并
void in_place_merge(int q[], int l, int mid, int r)
{
    int l1 = l, l2 = mid + 1;
    if (q[mid] <= q[l2])
        return;

    while (l1 <= mid && l2 <= r)
    {
        if (q[l1] <= q[l2])
            l1++;
        else
        {
            // q[l1] > q[l2]
            int tmp = q[l2];

            int k = l2;
            while (l2 > l1)
                q[k] = q[--k];
            q[l1] = tmp;

            // update l1 l2
            l1++;
            mid++;
            l2++;
        }
    }
}

//
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

void merge_sort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int mid = l + r >> 1;

    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);

    merge(q, l, r, mid);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}