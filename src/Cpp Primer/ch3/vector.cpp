#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

/*

stl vector

vector 表示对象的集合，其中的元素类型都相同，集合中每个对象都对应一个索引，可使用索引
访问相应的元素，集合大小可动态变化

使用 vector 需引入头文件 `#include <vector>`

1）定义和初始化 vector

列表初始化

值初始化

2）vector 操作

- v.push_back(t)    添加元素 t 到 vector 尾部
- empty()           
- size()            
- v[n]              返回v中第n个位置上元素的引用，n从0开始
- v1 = v2           用v2中的元素拷贝替换v1中的元素
- v1 = {a, b, c...} 用列表中的元素拷贝替换v1中的元素
- v1 == v2          v1与v2相等当且仅当元素数量相同且对应位置元素的值都相等      
- v1 != v2
- <, <=, >, >=

注意
    - vector 不能用下标形式添加元素

*/

int main()
{
    vector<int> v1;
    cout << "v1 size= " << v1.size() << endl;

    vector<int> v2 = {1, 2, 4, 8, 16};

    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto &i : v2)
    {
        i += 1;
        cout << i << " ";
    }
    cout << endl;

    for (auto it = v2.begin(); it != v2.end(); it ++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (int i = 0; i < v2.size(); i ++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}