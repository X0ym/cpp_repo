#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void append_str()
{
    // operator + 可用于拼接字符和字符串
    string name = "bob";
    string ans = name + "_" + 'c';
    cout << ans << endl; // bob_c

    // append() 添加字符串到末尾
    name.append("_alice");
    cout << name << endl; // bob_alice

    // push_back(char c) 添加字符到末尾
    name.push_back('_');
    cout << name << endl; // bob_alice_
}

/*

    find(): Find content in string
        find(str, pos): 在字符串中寻找 str 第一次出现的位置，如果指定 pos 则从
        pos 开始。

    rfind(): Find last occurrence of content in string
        rfind(str, pos)：在字符串中寻找 str 最后一次出现的位置，如果指定 pos，
        则找到的位置，只会小于等于 pos。

*/
void find_str()
{
    string str = "hello worlod!";
    int pos = str.find("lo");
    if (pos != str.npos)
        cout << "find lo pos: " << pos << endl;
    else
        cout << "not find lo" << endl;
}

int main()
{
    // append_str();

    find_str();


    return 0;
}