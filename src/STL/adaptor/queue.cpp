#include<iostream>
#include<queue>

using namespace std;

/*

std::queue 是一种先进先出 FIFO 的容器适配器
仅支持查询和删除队首元素，不支持随机访问，不支持迭代器

定义
    std::queue<TypeName> q;  // 使用默认底层容器 deque，数据类型为 TypeName
    std::queue<TypeName, Container> q;  // 使用 Container 作为底层容器
    std::queue<TypeName> q2(q1);  // 将 s1 复制一份用于构造 q2

成员函数

    front() 访问队首元素（如果队列为空，此处会出错）
    push(x) 向队列中插入元素 x
    pop() 删除队首元素
    size() 查询容器中的元素数量
    empty() 询问容器是否为空

*/
int main()
{
    // 定义并默认初始化
    queue<int> q;
    
    cout << "q.empty()= " << q.empty() << endl; // 1
    cout << boolalpha << q.empty() << endl;
    // 元素入队
    q.push(1);  // 1
    q.push(2);  // 2 1
    // 获取队首元素 front()
    cout << "q.front()= " << q.front() << endl; // 1
    cout << "q.size()= " << q.size() << endl;   // 2
    // 取出队首元素 pop()
    q.pop(); // 2
    cout << "q.front()= " << q.front() << endl; // 2
    cout << "q.size()= " << q.size() << endl;   // 1

    return 0;
}