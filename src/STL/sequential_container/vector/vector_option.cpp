#include <iostream>
#include <vector>

using namespace std;

/*

vector 支持的操作

1）Capacity
- size()：返回 vector 中元素的个数
- empty()：为空返回 true，否则返回 false

2) Element access 获取元素
- operator[n]：下标运算符，返回 vector 第 n 个元素的引用。超过元素范围时，导致 undefined behavior
- at(n)：同上，但区别在于 at 函数有边界检查，超过范围时会抛出 out_of_range 异常
- front()：返回 vector 首个元素的引用，注意空的容器调用该函数将导致 undefined behavior
- back()：返回 vector 末尾元素的引用，注意空的容器调用该函数将导致 undefined behavior

3）Modifiers 调整元素
- void push_back：添加一个元素到 vector 末尾
- void pop_back：移出 vector 末尾的一个元素

*/

int main()
{
    // size
    vector<int> v1;
    cout << "0. size: " << v1.size() << '\n'; // 0. size: 0

    for (int i = 0; i < 10; i++)
        v1.push_back(i);
    cout << "1. size: " << v1.size() << '\n'; // 1. size: 10

    v1.insert(v1.end(), 10, 100);
    cout << "2. size: " << v1.size() << '\n'; // 2. size: 20

    v1.pop_back();
    cout << "3. size: " << v1.size() << '\n'; // 3. size: 19

    // empty
    cout << "v1.empty() = " << v1.empty() << endl; // v1.empty() = 0

    // operator[] 下标运算符
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    // at
    // v1.at(v1.size());

    // front back
    cout << "v1.front() = " << v1.front() << endl; // v1.front() = 0
    cout << "v1.back() = " << v1.back() << endl;   // v1.back() = 100

    // resize
    vector<int> v2;
    v2.resize(5);
    for (auto i : v2)
        cout << i << " "; // 默认值 0
    cout << endl;

    vector<vector<int>> v3;
    v3.resize(5, vector<int>(5));
    for (int i = 0; i < v3.size(); i++)
    {
        for (auto x : v3[i])
            cout << x << " "; // 默认值 0
        cout << endl;
    }
}