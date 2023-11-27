#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 维护单调递增栈
void monotonicIncStack(vector<int> nums)
{
    int n = nums.size();
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        while (!stk.empty() && stk.top() > nums[i])
            stk.pop();
        stk.push(nums[i]);
    }

    vector<int> q(stk.size());
    int j = stk.size() - 1;
    while (!stk.empty())
    {
        q[j] = stk.top();
        stk.pop();
        j--;
    }

    cout << "The nums: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;

    cout << "The stack: ";
    for (int i = 0; i < q.size(); i++)
        cout << q[i] << " ";
    cout << endl;
}

// 维护单调递增栈
void monotonicIncStack2(vector<int> nums)
{
    int n = nums.size();
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {

        while (!stk.empty() && stk.top() > nums[i])
            stk.pop();
        stk.push(nums[i]);
    }

    vector<int> q(stk.size());
    int j = stk.size() - 1;
    while (!stk.empty())
    {
        q[j] = stk.top();
        stk.pop();
        j--;
    }

    cout << "The nums: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;

    cout << "The stack: ";
    for (int i = 0; i < q.size(); i++)
        cout << q[i] << " ";
    cout << endl;
}

// 维护单调递减栈
void monotonicDecStack(vector<int> nums)
{
    int n = nums.size();
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {

        while (!stk.empty() && stk.top() < nums[i])
            stk.pop();
        if (stk.empty())
            cout << nums[i] << " 左侧不存在比 " << nums[i] << " 大的数 " << endl;
        else
        {
            cout << nums[i] << " 左侧第一个比 " << nums[i] << " 大的数：" << stk.top() << endl;
        }
        stk.push(nums[i]);
    }
}

int main()
{
    // monotonicIncStack({1, 3, 2, 5, 4, 7});
    monotonicDecStack({1, 3, 2, 5, 4, 7});
    return 0;
}