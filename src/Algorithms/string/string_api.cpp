#include <iostream>
#include <string>

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

int main()
{
    append_str();
    return 0;
}