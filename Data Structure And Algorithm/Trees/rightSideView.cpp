/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        if (root == NULL)
        {
            return {};
        }
        queue<TreeNode *> q;
        q.push(root);
        vector<int> ans;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *deleted = q.front();
                q.pop();
                if (i == size - 1)
                {
                    ans.push_back(deleted->val);
                }
                if (deleted->left != NULL)
                {
                    q.push(deleted->left);
                }
                if (deleted->right != NULL)
                {
                    q.push(deleted->right);
                }
            }
        }
        return ans;
    }
};