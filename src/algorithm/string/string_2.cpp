#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "Hello World!";
    for (auto c : s)
    {
        cout << c << " ";
    }
    cout << endl;

    for (auto &c : s) 
    {
        c = toupper(c);
    }
    cout << s << endl;

    // 访问字符串的单个字符有两种方式：1 使用下标，2 使用迭代器
    // 1 使用下标运算符([])，接收的输入参数是 string::size_type
    // 类型的值，表示要访问的字符的位置，返回值是该位置上字符的引用
    cout << s[0] << " " 
        << s[s.size() - 1] << " " << endl;

    // 如果
    for (decltype(s.size()) index = 0; index != s.size()
        && !isspace(s[index]); index++)
    {
        s[index] = toupper(s[index]);
    }
    
    

    return 0;
}