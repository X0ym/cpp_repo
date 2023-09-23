#include <iostream>
#include <queue>

using namespace std;

/*

std::priority_queue<TypeName> q;             // 数据类型为 TypeName
std::priority_queue<TypeName, Container> q;  // 使用 Container 作为底层容器
std::priority_queue<TypeName, Container, Compare> q;
// 使用 Container 作为底层容器，使用 Compare 作为比较类型

// 默认使用底层容器 vector
// 比较类型 less<TypeName>（此时为它的 top() 返回为最大值）
// 若希望 top() 返回最小值，可令比较类型为 greater<TypeName>
// 注意：不可跳过 Container 直接传入 Compare

// 从 C++11 开始，如果使用 lambda 函数自定义 Compare
// 则需要将其作为构造函数的参数代入，如：
auto cmp = [](const std::pair<int, int> &l, const std::pair<int, int> &r) {
  return l.second < r.second;
};
std::priority_queue<std::pair<int, int>,
                    std::vector<std::pair<int, int> >,
                    decltype(cmp)>
                    pq(cmp);

成员函数
常数复杂度
- top() 访问堆顶元素，优先队列不能为空
- empty() 容器是否为空
- size() 查询容器中的元素数量

对数复杂度
- push(x) 插入元素，对底层容器排序
- pop() 删除堆顶元素，此时优先队列不能为空

*/
int main()
{
  // 默认最大堆，
  priority_queue<int> q1;
  priority_queue<int, vector<int>> q2;
  priority_queue<int, vector<int>, less<int>> q11;

  // 最小堆
  priority_queue<int, vector<int>, greater<int>> q3;

  vector<int> v = {1, 2, 3, 4, 5};

  for (int i = 0; i < v.size(); i++)
  {
    q1.push(v[i]);
    q3.push(v[i]);

    cout << "q1.top()= " << q1.top() << endl;
    cout << "q3.top()= " << q3.top() << endl;
    cout << endl;
  }

  return 0;
}