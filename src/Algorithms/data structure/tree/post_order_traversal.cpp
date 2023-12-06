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
    dfs(root->right);
    visit(root);
}

vector<int> postOrder(TreeNode *root)
{
    vector<int> res;
    if (!root)
        return res;

    stack<TreeNode *> stk;
    TreeNode *node = root;
    TreeNode *r = nullptr; // 记录最近访问过的结点
    while (node || !stk.empty())
    {
        if (node)
        {
            stk.push(node);
            node = node->left;
        }
        else
        {
            node = stk.top();
            if (node->right && node->right != r)
                node = node->right;
            else
            {
                node = stk.top();
                stk.pop();
                visit(node);
                res.push_back(node->val);
                r = node;
                // 每次出栈访问完一个结点，即遍历完以该结点为根的子树，需将 node 置为空
                node = nullptr;
            }
        }
    }
    return res;
}

int main()
{
    return 0;
}