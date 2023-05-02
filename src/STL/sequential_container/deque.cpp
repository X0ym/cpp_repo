#include<iostream>
#include<deque>

using namespace std;

/*

STL deque
std::deque 是 STL 提供的双端队列数据结构

*/
int main()
{
    // 1 定义并初始化
    
    // 默认初始化
    deque<int> v1;
    // 初始化10个int元素，每个都初始化为 0
    deque<int> v2(10);
    // 初始化10个int元素，每个都初始化为 1
    deque<int> v3(10, 1);
    // 使用 v3 初始化 v4
    deque<int> v4(v3);
    // 使用迭代器初始化
    deque<int> v5(v3.begin(), v3.begin() + 3);

    // 2 元素访问
    
    // at() 返回指定位置元素的应用，执行越界检查
    cout << "v3.at(2)= " << v3.at(2) << endl;
    // operator[] 返回容器中指定位置元素的引用，不执行越界检查
    cout << "v3[2]= " << v3[2] << endl;
    
    // 取队首 front() 和队尾元素 back()
    cout << "v3.front()= " << v3.front() << endl;
    cout << "v3.back()= " << v3.back() << endl;

    deque<string> v6 = {"google", "microsoft", "twitter"};
    // push_front() pop_front()
    v6.push_front("meta");
    for (auto i : v6) cout << i << " "; cout << endl;

    v6.pop_front();
    for (auto i : v6) cout << i << " "; cout << endl;

    // push_back()  pop_back()
    v6.push_back("facebook");
    for (auto i : v6) cout << i << " "; cout << endl;

    v6.pop_back();
    for (auto i : v6) cout << i << " "; cout << endl;


    

    return 0;
}