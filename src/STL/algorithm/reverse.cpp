#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3};
    reverse(begin(v), end(v));

    for (auto e : v)
        cout << e << " ";
    cout << '\n';

    vector<int> v2 = {1, 2, 4, 8};
    reverse(v2.begin(), v2.end());
    for (auto e : v2)
        cout << e << " ";
    cout << endl;

    // 反转数组
    // 方式1
    int a[] = {4, 5, 6, 7};
    reverse(begin(a), end(a));

    for (auto e : a)
        cout << e << " ";
    cout << endl;

    // 方式2
    reverse(a, a + 4);
    for (auto e : a)
        cout << e << " ";
    cout << endl;
}

/*

result:
3 2 1
8 4 2 1
7 6 5 4
4 5 6 7

*/