#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

/*

stl string

1）定义和初始化 string 对象
多种方式：直接初始化和拷贝初始化

暂时记住第一个
string s1 = "hiya";


2）string 对象上的操作

- s.empty()     s为空返回 true，否则返回 false
- s.size()      返回s中字符的个数
- s[n]          返回s中第n个字符的引用，n从0开始
- s1 + s2       字符串拼接
- s1 = s2         用s2的副本代替s1中原来的字符
- s1 == s2      s1和s2中的字符完全相同则它们相等，大小写敏感
- <, <=, >, >=  对字符串中的字符比较字典序，对字母大小写敏感

比较 string 对象
- 相等性运算符（== 和 !=）分别检验两个 string 对象相等或不相等，比较长度和所包含的字符
是否全部相同
- string 大小的判断：实际是比较第一个出现相异字符，如果两个 string 的长度不一致，一直
比较到较短 string 的最后一个字符仍然相同，则较长 string 大于较短 string 对象

两个 string 对象相加
    string s1 = "hello", s2 = "world";
    string s3 = s1 + s2; // s3 为 "hello world"
    s1 += s2; // 等价于 s1 = s1 + s2

字面值与 string 对象相加
- 标准库允许把字符字面值和字符串字面值转换为 string 对象
string s1 = "hello", s2 = "world";
string s3 = s1 + ", " + s2 + '/n';

注意：当把 string 对象和字符字面值及字符串字面值混在一条语句使用时，必须确保每个加法运算符
的两侧的运算对象至少有一个是 string 对象


3）string上的读写操作

iostream
    string s1, s2;
    cin >> s1 >> s2;
    cout << S1 << S2 << endl;

4）处理 string 对象中的字符

使用 C++11 标准提供的 range for，可遍历给定序列中的每个元素并对序列中的每个值执行某种操作
语法如下：
    for(decalaration : expression) {
        statement
    }
其中 expression 是一个对象，表示一个序列；declaration 定义一个变量，用于访问序列中的元素
，每次遍历，将被初始化为序列中的下一个元素值

string str("some string");
for (auto c : s)
    cout << c << endl; // 输出 str 中的每个字符
使用 auto 关键字让编译器决定 c 的类型，这里 c 的类型是 char

cctype 库提供了一些字符相关的有用功能
- isalnum(c)    c为字母或数字时返回 true
- isdigit(c)    c为数字时返回 true
- isxdigit(c)   c为十六进制数字时返回 true
- isspace(c)    c为空白字符时返回 true

- isalpha(c)    c为字母时返回 true
- islower(c)    c为小写字母时返回 true
- isupper(c)    c为大写字母时返回 true
- tolower(c)    如果c是大写字母，则转化为对应的小写字母，否则原样输出c
- toupper(c)    如果c是小写字母，则转化为对应的大写字母，否则原样输出c

string 支持使用下标进行随机访问

*/
int main()
{

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