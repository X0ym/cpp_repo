#include <iostream>
#include <string>

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

    char &a = s1.at(2);
    cout << a << endl;

    char &b = s1[1];
    cout << b << endl;

    // size
    cout << "s1.size()= " << s1.size() << endl;

    // append(s) 结尾拼接字符串s
    s1.append(" C++");
    cout << s1 << endl;

    // substr 操作
    // substr(start, len) 可以从字符串的 start（从 0 开始）
    // 截取一个长度为 len 的字符串（缺省 len 时代码截取到字符串末尾）
    string s2 = "abcd";
    cout << s2.substr() << endl;     // abcd
    cout << s2.substr(2, 3) << endl; // cd

    // replace(pos, cout, str) replace(first, last, str)

    // 比较 < > ==
    cout << (s1 < s2) << endl;  // 1
    cout << (s1 > s2) << endl;  // 0
    cout << (s1 == s2) << endl; // 0

    // push_back() append() operator+=
    string str = "";
    str.append({'a', 'b'}); // initializer_list<char>
    str.append("c");
    str.push_back('d'); // Append a single character.
    str += "efgh";
    str += 'i';
    str += {'j', 'k'};
    cout << str << endl;

    // substr: 含子串 [pos, pos + count) 或 [pos, size()) 的字符串。
    //      pos 从0开始
    string hello = "hello";
    cout << hello.substr(0, 1) << endl; // h

    // find(str, pos): 从 pos 开始寻找首个等于给定字符序列str的子串
    // find(ch, pos): 从 pos 开始寻找首个等于给定字符ch的字符
    // 返回值：找到的子串的首字符位置，或在找不到这种子串时返回 npos
    cout << hello.find("lo", 0) << endl; // 3
    cout << hello.find('o', 0) << endl;  // 4

    // size_type rfind( const basic_string& str, size_type pos = npos ) const;
    // 寻找最后一个等于给定字符序列的子串。搜索从 pos（从右向左）开始，也就是说找到的子串不会从 pos 之后的位置开始。
    // 如果 pos 大于等于 size() - 1 ，那么就会在整个字符串中搜索。
    cout << hello.rfind("he", 0) << endl; // 0
    cout << hello.rfind("he", 2) << endl;
    cout << hello.rfind("lo", 3) << endl;

    // 前缀
    if (hello.find("hel") == 0)
        cout << "hello start with: hel" << endl;
    if (hello.rfind("hel", 0) == 0)
        cout << "hello starts with: hel" << endl;
    // 后缀
    string s = "lo";
    if (hello.rfind(s) == (hello.size() - s.size()))
        cout << "hello end with: hel" << endl;
    cout << string::npos << endl;

    return 0;
}