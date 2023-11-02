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
class Solution {
public:
    int count = 0;
    pair<int,int> dfs(TreeNode* root)
    {
        if(root == NULL)
        {
            return {0,0};
        }
        pair<int, int> left = dfs(root->left);
        pair<int, int> right = dfs(root->right);

        int sum = left.first + right.first + root->val;
        int c = left.second + right.second + 1;

        if(round(sum/c) == root->val)
        {
            count++;
        }
        return {sum, c};
    }
    
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return count;
    }
};