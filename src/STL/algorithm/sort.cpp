#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void test()
{
    vector<int> nums1 = {1, 2, 4, 2, 1};

    // sort 默认升序
    sort(nums1.begin(), nums1.end());
    for (auto x : nums1)
        cout << x << " ";
    cout << endl;
    // 等价于 sort(nums1.begin(), nums1.end(), less<int>());

    // 降序
    sort(nums1.begin(), nums1.end(), greater<int>());
    for (auto x : nums1)
        cout
            << x << " ";
    cout << endl;

    vector<pair<int, int>> cnt;
    // add data

    sort(cnt.begin(), cnt.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.first + a.second > b.first + b.second; });

    

    /*

    1 1 2 2 4
    4 2 2 1 1

    */
}

int main()
{
    int arr[3] = {1, 4, 2};
    cout << "Before sort: ";
    for (int i = 0; i < 3; i++)
    {
        cout << " " << arr[i];
    }
    sort(arr, arr + 3);
    cout << "\nAfter sort: ";
    for (int i = 0; i < 3; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    string s = "Hello World";
    cout << "Before sort: " << s << endl;
    sort(s.begin(), s.end());
    cout << "\nAfter sort: " << s << endl;

    vector<int> v = {1, 4, 3, 2};
    cout << "Before sort: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    sort(v.begin(), v.end());
    cout << "After sort: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    struct Item
    {
        int num;
    };

    vector<Item> v2 = {Item{1}, Item{4}, Item{2}};
    // sort 升序排序 lambda 方式
    sort(v2.begin(), v2.end(), [](const Item &a, const Item &b)
         { return a.num < b.num; });
    for (auto i : v2)
        cout << i.num << " ";
    cout << endl;

    vector<Item> v3 = {Item{1}, Item{4}, Item{2}};
    // sort 降序排序
    sort(v3.begin(), v3.end(), [](const Item &a, const Item &b)
         { return a.num > b.num; });
    for (auto i : v3)
        cout << i.num << " ";
    cout << endl;

    test();

    return 0;
}