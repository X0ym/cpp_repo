#include<iostream>
#include<deque>

using namespace std;

/*

STL deque
std::deque 是 STL 提供的双端队列数据结构

*/
int main()
{
    // 定义并初始化
    deque<int> v1;

    deque<int> v2(10);

    deque<int> v3(10, 1);

    deque<int> v4(v3);

    deque<int> v5(v3.begin(), v3.begin() + 3);


    // push_front() pop_front()

    // push_back()  pop_back()

    

    return 0;
}