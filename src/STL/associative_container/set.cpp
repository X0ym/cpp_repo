#include<iostream>
#include<set>

using namespace std;

/*

关联容器中元素是根据关键字来保存和访问的。两种主要的关联容器类型是 set 和 map

set 容器内的元素会被自动排序，set 与 map 不同，set 中的元素即是键值又是实值，
set 不允许两个元素有相同的键值。不能通过 set 的迭代器去修改 set 元素，原因是
修改元素会破坏 set 组织。当对容器中的元素进行插入或者删除时，操作之前的所有迭
代器在操作之后依然有效。

set 内部通常采用红黑树实现，与数学中集合相似，set 中不存在值相等的元素；
如果需要有相同的元素的集合，可使用 multiset 。两者的使用方法基本相同

插入和删除操作

- insert(x) 将元素 x 插入到 set 中
- erase(x) 删除值为 x 的所有元素，返回删除元素的个数
- erase(pos) 删除迭代器为 pos de 元素，要求迭代器必须合法
- erase(first,last) 删除迭代器在 [first,last) 范围内的所有元素
- clear() 清空 set

insert 函数的返回值类型是 pair<iterator, bool>，iterator 是一个指向所
插入元素（如果插入的值本身就在容器中的元素）的迭代器，bool 表示元素是否插入
成功

查找操作

- count(x)  返回 set 中值为 x 的元素数量
- find(x)   set 内存在值为 x 的元素时会返回该元素的迭代器，否则返回 end()
- lower_bound(x) 返回指向首个不小于给定键的元素的迭代器。如果不存在这样的元素，
    返回 end()。
- upper_bound(x) 返回指向首个大于给定键的元素的迭代器。如果不存在这样的元素，
    返回 end()。
- empty() 返回容器是否为空。
- size() 返回容器内元素个数。

*/
int main()
{
    set<int> s1;
    set<string> s2;
    set<string> s3(s2.begin(), s2.end());

    int num[] = {1, 2, 3, 4, 4};
    set<int> s4(num, num + 5);

    for (auto i : num)
    {
        auto p = s1.insert(i);
        if (p.second) {
            cout << "s1 insert " << i << " success." << endl;
        } else {
            cout << "s1 insert " << i << " failed." << endl;
            cout << "s1 has " << *p.first << endl;
        }
    }

    // find(x) coutn(x)
    if (s1.find(4) != s1.end()) {
        cout << "s1 can find 4" << endl;
    }
    auto n1 = s1.count(4);
    cout << "s1.count(4)= " << n1 << endl;

    if (s1.find(5) == s1.end()) {
        cout << "s1 can not find 5" << endl;
    }
    auto n2 = s1.count(5);
    cout << "s1.count(5)= " << n2 << endl;

    // lower_bound(x) upper_bound(x) erase(set<int>::iterator pos)
    set<int>::iterator it1 = s1.lower_bound(3);
    if (it1 != s1.end()) {
        // 存在小于 3 的元素，可能有多个，lower_bound 返回首个元素
        s1.erase(it1);
    } else {
        cout << "set: s1 has no 3" << endl;
    }

    set<int>::iterator it2 = s1.upper_bound(5);
    if (it2 == s1.end()) {
        cout << "s1 has no elem larger then 5" << endl;
    }

    // empty() size()
    if (!s1.empty()) {
        cout << "s1 not epmty" << endl;
    }

    set<int>::size_type size = s1.size();
    cout << "s1.size()=" << size << endl;

    s1.erase(4);
    if (s1.find(4) == s1.end()) {
        cout << "s1 del 4 success" << endl;
    }

    return 0;
}