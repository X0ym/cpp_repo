#include<iostream>
#include<stack>

using namespace std;

/*

stack<T> 容器适配器 

数据是 LIFO 方式组织的



*/
int main()
{

    // 定义及初始化 std::stack<T>
    /*
    stack<int> s1;
    stack<int, list<int>> s2;
    stack<int> s3(s1);
    */
    stack<int> s;
    s.push(1);
    s.push(2);
    cout << "s.size()= " << s.size() << endl;
    cout << "s.empty()= " << s.empty() << endl;
    s.pop(); // 取栈顶元素
    s.push(3);

    // 取栈顶元素 top()，如果栈不能为空
    cout << s.top() << endl;
    return 0;
}