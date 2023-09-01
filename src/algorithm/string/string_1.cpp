#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "CPP";
    cout << s << endl;

    // size()
    //string::size_type len = s.size();
    auto len = s.size();
    for (int i = 0; i < len; i ++)
    {
        cout << s[i] << " ";
    }
    cout << endl;

    string s1 = "CPP";
    for (auto c : s1)
    {
        cout << c << endl;
    }
    cout << endl;

    if (s1.empty())
        cout << "empty" << endl;
    else   
        cout << "not empty" << endl;

    if (s1 == s)
        cout << "s1 == s" << endl;

    // string与字面值相加时，必须确保每个加法运算符两侧的
    // 运算对象至少有一个是 string
    string s3 = s + s1;
    string s4 = s1 + ", ";
    //string s5 = "hello" + ", ";// 错误
    string s6 = s1 + ", " + "world";
    // string s7 = "hello" + ", " + s1;// 错误


    

    return 0;
}