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

/*
    n 为
*/
TreeNode *buildTreeByLevelAndInOrder(vector<int> &level, vector<int> &inOrder, int l, int r)
{
    if (level.size() == 0)
        return nullptr;

    int i, j;

    TreeNode *root;
    root = new TreeNode(level[0]);

    // 存放左右子树的层序序列
    vector<int> lLevel, rLevel;

    // 找根结点
    while (inOrder[i] != root->val)
        i++;

    // 遍历该层序列，划分左右子树的层序序列
    for (j = 1; j < level.size(); j++)
    {
        int k;
        // 左子树
        for (k = l; k < i; k++)
        {
            if (inOrder[k] == level[j])
            {
                lLevel.push_back(level[j]);
                break;
            }
        }

        // 右子树
        if (k == i)
            rLevel.push_back(level[j]);
    }

    root->left = buildTreeByLevelAndInOrder(lLevel, inOrder, l, i - 1);
    root->right = buildTreeByLevelAndInOrder(rLevel, inOrder, i + 1, r);
    return root;
}

TreeNode *buildTree(vector<int> &levelOrder, vector<int> &inOrder)
{
    return buildTreeByLevelAndInOrder(levelOrder, inOrder,
                                      0, inOrder.size() - 1);
}

void preOrder(TreeNode *root)
{
    if (root)
    {
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(TreeNode *root)
{
    if (root)
    {

        preOrder(root->left);
        cout << root->val << " ";
        preOrder(root->right);
    }
}

void postOrder(TreeNode *root)
{
    if (root)
    {
        preOrder(root->left);
        preOrder(root->right);
        cout << root->val << " ";
    }
}

void levelOrder(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);

    TreeNode *node;
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        cout << node->val << " ";
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
}

int main()
{
    TreeNode *root;

    vector<int> level = {3, 9, 20, 15, 7};
    vector<int> mid = {9, 3, 15, 20, 7};
    root = buildTree(level, mid);

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    levelOrder(root);
}

/*

3 9 20 15 7
9 3 20 15 7
9 20 15 7 3
3 9 20 15 7

*/