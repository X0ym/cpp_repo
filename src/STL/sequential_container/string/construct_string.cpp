#include <iostream>
#include <string>

using namespace std;

/*

1）Constructor

*/

int main()
{

    // operator+= 在字符串末尾添加字符或字符串，支持 c-string
    string name("John");
    string family("Smith");
    name += " K. ";           // c-string
    name += family;           // string
    name += ' ';              // character
    name += {'a', 'a', '\n'}; // initializer_list
    cout << name;             // John K. Smith aa

    // append 在字符串末尾添加字符或字符串，支持 c-string
    string s0("Hello");
    string s;
    s.append(s0);
    s.append(1, ' ');
    s.append("Worldaaa", 5); // 取前 5 个字符添加
    s.append({'!'});
    cout << "s= " << s << endl; // s= Hello World!

    string s2;
    s2.pop_back(); // 字符串为空时，抛出 std::out_of_range 异常

    return 0;
}