#include<iostream>
#include<map>

using namespace std;

/*

STL Map


*/
int main()
{
    // map的定义和初始化
    map<string, int> m1;
    // map的列表初始化
    map<string, string> m2 = {
        {"key1", "value1"}, 
        {"key2", "value2"}
    };

    // multimap的定义和初始化与 map 一致
    multimap<string, int> m2 = {
        {"key1", "value1"},
        {"key2", "value2"},

    };

    

}