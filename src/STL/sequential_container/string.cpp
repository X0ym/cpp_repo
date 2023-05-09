#include<iostream>
#include<string>

using namespace std;
/*

字符串子串，或成为子字符串
    - s.substr(pos, n) 返回一个 string，包含 s 从 pos 开始的 n 个字符的拷贝
        pos 的默认值为 0，n 的默认值为 s.size() - pos ，即从 pos 开始的所有字符
        n 超过字符串长度时，以字符串长度为准



*/
int main()
{
    // substr 操作
    string s1 = "abcd";
    cout << s1.substr() << endl; // abcd
    cout << s1.substr(2, 3) << endl; // cd

    // 
    return 0;
}