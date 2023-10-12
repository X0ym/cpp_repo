#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main()
{
    // 初始化
    // 默认构造函数
    map<string, int> m;
    set<string> s1;

    // 复制构造函数
    set<string> s2(s1);

    // 范围构造函数
    vector<int> v = {1, 2, 3, 3, 4};
    set<int> s3(v.begin(), v.end());

    // 初始化器列表构造函数
    set<string> exlude = {"the", "but", "and"}; // 等价于 set<string> exlude {"the", "but", "and"};
    map<string, string> authors = {
        {"Joyce", "James"},
        {"Austen", "Jane"}};

    /**
     *
     *  插入元素
     *
     *
     */
    set<string> names;
    names.insert("Tom");
    auto res = names.insert("Tom");
    // pair<set<string>::iterator, bol> res = names.insert("Tom");

    map<string, int> counts;
    counts.insert({"Barth", 1});
    counts.insert(make_pair("John", 2));
    pair<map<string, int>::iterator, bool> ret = counts.insert({"John", 1});
    if (!ret.second)
    {
        cout << "key: John exists" << endl;
        ++(ret.first->second);
        cout << "key: " << ret.first->first << "Value: " << ret.first->second << endl;
    }

    /**
     *
     *  删除元素
     *
     */

    

    /**
     *
     *  下标操作
     *
     */

    /**
     *
     * 访问元素
     *
     */

    return 0;
}