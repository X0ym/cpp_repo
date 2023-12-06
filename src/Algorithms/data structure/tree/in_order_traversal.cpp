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

    int ans; // 根据题意补充代码
    dfs(root->left);
    visit(root);
    dfs(root->right);
}

vector<int> inOrder(TreeNode *root)
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
            stk.push(node);
            node = node->left;
        }
        else
        {
            node = stk.top();
            stk.pop();
            visit(node);
            node = node->right;
        }
    }
    return res;
}

main()
{

    return 0;
}