#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void visit(TreeNode *node) {}

int dfs(TreeNode *root)
{
    if (root == nullptr)
        return 0;

    int ans;
    visit(root); // 根据题意补充代码
    dfs(root->left);
    dfs(root->right);
    return ans;
}

vector<int> preOrder(TreeNode *root)
{
    vector<int> res;
    if (root == nullptr)
        return res;

    stack<TreeNode *> stk;
    TreeNode *node = root;
    while (!stk.empty() || node)
    {
        if (node)
        {
            res.push_back(node->val);
            stk.push(node);
            node = node->left;
        }
        else
        {
            // visit(stk.top());
            node = stk.top();
            stk.pop();
            node = node->right;
        }
    }
    return res;
}

int main()
{

    return 0;
}