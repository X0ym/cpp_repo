#include<iostream>
#include<string>

using namespace std;
/*

std::string


字符串子串，或成为子字符串
    - s.substr(pos, n) 返回一个 string，包含 s 从 pos 开始的 n 个字符的拷贝
        pos 的默认值为 0，n 的默认值为 s.size() - pos ，即从 pos 开始的所有字符
        n 超过字符串长度时，以字符串长度为准



*/
int main()
{

    // 访问
    string s1 = "Hello World!";
    cout << "s1[2]= " << s1[2] << endl;
    
    char& a = s1.at(2);
    cout << a << endl;

    // size
    cout << "s1.size()= " << s1.size() << endl;

    // append(s) 结尾拼接字符串s
    s1.append(" C++");
    cout << s1 << endl;

    // substr 操作
    // substr(start, len) 可以从字符串的 start（从 0 开始）
    // 截取一个长度为 len 的字符串（缺省 len 时代码截取到字符串末尾）
    string s2 = "abcd";
    cout << s2.substr() << endl; // abcd
    cout << s2.substr(2, 3) << endl; // cd

    // replace(pos, cout, str) replace(first, last, str)
    

    // 比较 < > ==
    cout << (s1 < s2) << endl;  // 1
    cout << (s1 > s2) << endl;  // 0
    cout << (s1 == s2) << endl; // 0
    return 0;
}