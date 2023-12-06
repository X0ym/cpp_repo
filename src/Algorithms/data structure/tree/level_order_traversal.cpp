#include <iostream>
#include <vector>
#include <queue>

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

void bfs(TreeNode *root)
{
    if (!root)
        return;

    queue<TreeNode *> q;
    q.push(root);

    TreeNode *node;
    while (!q.empty())
    {
        // q.size() 此时队列大小即为该层结点数量
        // 可单独算出该层的结点

        node = q.front();
        q.pop();
        visit(node);
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
}

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;

    if (!root)
        return ans;

    queue<TreeNode *> q;
    // 根结点入队
    q.push(root);

    TreeNode *p = root;
    while (!q.empty())
    {
        int levelSize = q.size();
        vector<int> l(levelSize);
        for (int i = 0; i < levelSize; i++)
        {
            p = q.front();
            q.pop();
            l[i] = p->val;
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        ans.push_back(l);
    }
    return ans;
}

int main()
{
    return 0;
}