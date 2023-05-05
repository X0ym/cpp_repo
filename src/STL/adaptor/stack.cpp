#include<iostream>
#include<stack>
#include<vector>
#include<deque>

using namespace std;

/*

stack<T> 容器适配器 

数据是 LIFO 方式组织的

- 定义
    std::stack<TypeName> s;  // 使用默认底层容器 deque，数据类型为 TypeName
    std::stack<TypeName, Container> s;  // 使用 Container 作为底层容器
    std::stack<TypeName> s2(s1);        // 将 s1 复制一份用于构造 s2

成员函数
以下成员函数均为常数复杂度
    top() 访问栈顶元素（如果栈为空，此处会出错）
    push(x) 向栈中插入元素 x
    pop() 删除栈顶元素
    size() 查询容器中的元素数量
    empty() 询问容器是否为空

*/
int main()
{

    // 定义及初始化 std::stack<T>
    /*
    stack<int> s1;
    stack<int, list<int>> s2;
    stack<int> s3(s1);
    */

    stack<int, vector<int> > s11;
    stack<string, deque<string> > s12;
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