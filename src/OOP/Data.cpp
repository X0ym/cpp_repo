#include <iostream>
#include <vector>

using namespace std;

class Data
{
public:
    vector<int> q1;
    vector<int> &q2;

    // 引用类型成员，必须在构造函数初始化列表中初始化
    Data(vector<int> &nums) : q2(nums) {}
};

int main()
{
    vector<int> t = {1, 2, 3};
    Data d = Data(t);
    for (int i : d.q2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << d.q1.size() << endl;

    return 0;
}