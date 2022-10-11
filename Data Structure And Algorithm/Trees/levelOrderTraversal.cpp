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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        if (root == NULL)
        {
            return ans;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> vec;
            for (int i = 0; i < size; i++)
            {
                TreeNode *deleted = q.front();
                q.pop();
                vec.push_back(deleted->val);
                if (deleted->left != NULL)
                {
                    q.push(deleted->left);
                }
                if (deleted->right != NULL)
                {
                    q.push(deleted->right);
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};