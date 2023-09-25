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
    bool EqualTargetSum(TreeNode* root, int targetSum, int sum) {
        if(!root)
        return false;
        if(root->left == NULL && root->right == NULL) {
            sum += root->val;
            if(sum == targetSum)
            return true;
        }
        return (EqualTargetSum(root->left, targetSum,sum+root->val) || 
        EqualTargetSum(root->right, targetSum,sum+root->val));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return EqualTargetSum(root, targetSum,0);
    }
};