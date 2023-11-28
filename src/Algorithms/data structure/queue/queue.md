# 队列

# 单调队列

例题：滑动窗口的最大值

[239. 滑动窗口最大值](https://leetcode.cn/problems/sliding-window-maximum/description/)

给你一个整数数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 k 个数字。滑动窗口每次只向右移动一位。
返回 滑动窗口中的最大值。

代码：
```cpp
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> q;
        for (int i = 0; i < n; i ++)
        {
            // 维护队列单调性：队首到队尾单调递减。元素入队
            while (!q.empty() && nums[q.back()] <= nums[i])
                q.pop_back();
            q.push_back(i);
            
            // 队首出队
            if (i - q.front() >= k) q.pop_front();

            // 3. 记录答案，队首为窗口最大值
            if (i >= k-1) ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};
```

# 优先队列
