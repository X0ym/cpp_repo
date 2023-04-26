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
    // 2) at()
    cout << "v11.at(2)= " << v11.at(2) << endl; // v11.at(2)= 3
    // 3) front()
    cout << "v11.front()= " << v11.front() << endl; // 2
    // 4) back()
    cout << "v11.back()= " << v11.back() << endl; // 4

    // 2.2 vector 遍历
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
    

    // 2.3 clear() push_back() 和 pop_back()
    vector<int> v12;
    v12.push_back(5);
    v12.pop_back();
    v12.push_back(10);
    for(auto i : v12) cout << i ; cout << endl;
    v12.insert(v12.begin(), 5);
    v12.insert(v12.begin() + 2, 20);
    v12.insert(v12.end(), 30);
    for(auto i : v12) cout << i << " " ; cout << endl;

    v12.clear();
    cout << "after clear. v0.size()= " << v12.size() << endl;

    // 2.4 
    vector<string> v13 = {"google", "microsoft", "cloudflare"};
    v13[1] = "baidu";
    cout << v13[1] << endl;

    return 0;

}