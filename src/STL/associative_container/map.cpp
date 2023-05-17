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
 *
 *
 *
 *
 * */

int main()
{
    map<string, int> m = {{"key", 1}};
    cout << m["key"] << endl;
    auto it = m.find("key");
    if (it != m.end()) {
        cout << it->first << endl;
        cout << it->second << endl;
    }
    
    map<string, int> m1;
    m1["key1"] = 10;
    m1["key2"] = 20;
    m1.insert(pair<string, int>("key3", 30));

    map<string, int>::size_type i = m1.count("key1");
    cout << "m1.count(\"key1\") = " << i << endl;
    
    return 0;
}