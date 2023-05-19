#include<iostream>
#include<map>

using namespace std;

/**
 *
 *
 *  std map multimap unordered_map unordered_multimap
 *  map 是有序键值对容器
 *
 *  map 重载了 operator[]，可以使用任意定义了 `operator <` 的类型作为键
 *  
 *  插入和删除操作
 *  - 通过下标查询或插入元素
 *  - insert() 插入 pair<key, T> 如，mp.insert(pair<string, int>("Alan", 10))
 *  - erase(key) 删除所有键为 key 的元素，返回删除元素的个数
 *  - erase(pos) 删除迭代器为 pos 的元素
 *  - erase(first, last) 删除迭代器在 [first, last) 范围内的元素
 *  - clear 清空
 *  
 * 
 *  查询操作
 *  - 
 *
 *  
 *  注意：在利用下标访问 map 中的某个元素时，如果 map 中不存在相应键的元素，会自动在 map 
 *  中插入一个新元素，并将其值设置为默认值（对于整数，值为零；对于有默认构造函数的类型，会
 *  调用默认构造函数进行初始化）。当下标访问操作过于频繁时，容器中会出现大量无意义元素，影响
 *  map 的效率。因此一般情况下推荐使用 find() 函数来寻找特定键的元素。
 * 
 * */

int main()
{

    cout << __cplusplus << endl;

    // map的定义和初始化
    map<string, int> m11;
    // map的列表初始化
    map<string, int> m12 = {
        {"key1", 1}, 
        {"key2", 2} };

    // multimap的定义和初始化与 map 一致
    multimap<string, string> m22 = {
        {"key1", "value1"},
        {"key2", "value2"} };

    map<string, int> m = {{"key", 1}};
    cout << m["key"] << endl;
    auto it = m.find("key");
    if (it != m.end()) {
        cout << it->first << endl;
        cout << it->second << endl;
    }
    
    map<string, int> m1;

    // 插入元素
    m1["key1"] = 10;
    m1["key2"] = 20;
    m1.insert(pair<string, int>("key3", 30));

    // 查找 key
    if (m1.find("key") == m1.end()) {
        cout << "m1 has no key: " << "key" << endl;
    } else {
        cout << "m1 has key: " << "key" << " value: " << m1["key"] << endl;
    }

    // count(x)
    map<string, int>::size_type i = m1.count("key1");
    cout << "m1.count(\"key1\") = " << i << endl;
    
    return 0;
}