#include<iostream>
#include<queue>

using namespace std;

/*

std::queue 是一种先进先出 FIFO 的容器适配器
仅支持查询和删除队首元素，不支持随机访问，不支持迭代器

*/
int main()
{
    // 定义并默认初始化
    queue<int> q;
    
    cout << "q.empty()= " << q.empty() << endl;
    q.push(1);
    q.push(2);
    cout << "q.front()= " << q.front() << endl;
    cout << "q.size()= " << q.size() << endl;
    // 取出队首元素
    q.pop();
    cout << "q.front()= " << q.front() << endl;
    cout << "q.size()= " << q.size() << endl;

    return 0;
}