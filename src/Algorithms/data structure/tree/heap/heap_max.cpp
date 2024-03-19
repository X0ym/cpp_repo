#include <iostream>

using namespace std;

const int N = 10;

int h[N], size;

/*

max-heap

*/

void up(int x)
{
    while (x > 1 && h[x] > h[x/2]) {
        swap(h[x], h[x/2]);
        x /= 2;
    }
}

void down(int x)
{
    while (2 * x <= size) {
        int t = 2 * x;
        if (t + 1 <= size && h[t + 1] > h[t]) ++t;
        if (h[t] <= h[x]) break;
        swap(h[t], h[x]);
        x = t;
    }
}

void buildMaxHeap()
{
    for (int i = size/2; i > 0; i --)
        down(i);
}

int main()
{
    size = 5;
    for (int i = 1; i <= 5; i ++)
        h[i] = i;
    buildMaxHeap();
    cout << h[1] << endl;

    // 0 5 4 3 1 2 0 0 0 0 
    for (auto i : h)
        cout << i << " ";
    cout << endl;

    return 0;
}