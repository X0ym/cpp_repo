#include <iostream>
#include <vector>

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

/*

二叉树遍历的核心问题：遍历当前结点的所有子结点后，如何返回当前结点继续遍历
使用栈结构或递归，可记录返回路径，来实现从下层到上层的移动。

Morris 遍历
避免使用栈，利用底层节点空闲的 right 指针，指向上层的某个结点，从而实现下层到上层的移动

算法过程
当前结点初始化为根结点
1. 如果当前结点为空，停止遍历，否则执行以下流程
2. 如果当前结点的左子树为空，则访问当前结点，并将其右孩子作为当前结点
3. 如果当前结点的左子树不为空，找到左子树上最右的节点，或者说找到当前结点
在中序遍历下的前驱结点
3.1 如果前驱结点的右孩子为空，则将其右孩子设置为当前结点。并更新当前结点为
当前结点的左孩子
3.2 如果前驱结点的右孩子为当前结点，将其右孩子置为空。访问当前结点，并将
当前结点更新为其右孩子
4. 重复2,3步骤，直到当前结点为空

[Morris Traversal方法遍历二叉树（非递归，不用栈，O(1)空间）](https://www.cnblogs.com/AnnieKim/archive/2013/06/15/MorrisTraversal.html)

*/

vector<int> inOrderMorrisTraversal(TreeNode *root)
{
    vector<int> ans;
    TreeNode *cur = root, *prev = nullptr;
    while (cur != nullptr)
    {
        if (!cur->left)
        {
            ans.push_back(cur->val);
            cur = cur->right;
            continue;
        }

        // 寻找当前结点左子树上最右的结点
        prev = cur->left;
        while (prev->right && prev->right != cur)
            prev = prev->right;

        if (!prev->right)
        {
            prev->right = cur;
            cur = cur->left;
        }
        else
        {
            // 最右节点的右孩子指向当前结点
            // 说明当前结点的左子树已经遍历完
            prev->right = nullptr;
            ans.push_back(cur->val);
            cur = cur->right;
        }
    }
    return ans;
}

void reverse(TreeNode *from, TreeNode *to)
{
    if (from == to)
        return;

    TreeNode *x = from, *y = from->right, *z;
    while (true)
    {
        z = y->right;
        y->right = x;
        x = y;
        y = z;
        if (x == to)
            break;
    }
}

void addReverse(TreeNode *from, TreeNode *to, vector<int> &ans)
{
    reverse(from, to);
    TreeNode *p = to;
    while (true)
    {
        ans.push_back(p->val);
        if (p == from)
            break;
        p = p->right;
    }
    reverse(to, from);
}

vector<int> postOrderMorrisTraversal(TreeNode *root)
{
    vector<int> ans;
    TreeNode dump(0);
    dump.left = root;
    TreeNode *cur = &dump, *prev = nullptr;
    while (cur)
    {
        if (!cur->left)
        {
            cur = cur->right;
            continue;
        }

        prev = cur->left;
        while (prev->right && prev->right != cur)
            prev = prev->right;

        if (!prev->right)
        {
            prev->right = cur;
            cur = cur->left;
        }
        else
        {
            addReverse(cur->left, prev, ans);
            prev->right = nullptr;
            cur = cur->right;
        }
    }
    return ans;
}

int main()
{
    return 0;
}