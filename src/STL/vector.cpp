#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // 1 定义并初始化
    vector<int> v1;         //
    vector<int> v2(v1);     // 使用v1初始化，包含v1所有元素的副本
    vector<int> v3 = v1;    // 等价于 v2(v1)
    vector<int> v4(3, 10);  // 创建指定数量的元素，3个10
    vector<int> v5(10);     // 默认初始化10个元素

    // 2 操作

    // 2.1 元素访问
    // 1) 下标
    vector<int> v11 = {1, 2, 3, 4};
    for (int i = 0; i < v11.size(); i ++) 
        cout << v11[i] << " ";
    cout << endl;
    // 注意：不能使用下标修改元素值

    for(vector<int>::iterator it = v11.begin(); it != v11.end(); it ++)
        cout << *it << " ";
    cout << endl;
    // 使用 auto
    for(auto it = v11.begin(); it != v11.end(); it ++)
        cout << *it << " ";
    cout << endl;
    // 仅能读取 i
    for (auto i : v11)
        cout << i << " ";
    cout << endl;

    // 可修改 i
    for(auto &i : v11) {
        i += 1;
        cout << i << " ";
    }
    cout << endl;
        

    // 2.2 push_back() 和 pop_back()
    

    return 0;

}