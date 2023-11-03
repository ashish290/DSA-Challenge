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
    int ans = 0;
    int findsum(TreeNode* root) {
        if(root == NULL)
        return 0;
        int leftsum = findsum(root->left);
        int rightsum = findsum(root->right);
        return leftsum + rightsum + root->val;
    }
    int solve(TreeNode* root) {
        if(!root) 
        return 0;
        int left = solve(root->left);
        int right = solve(root->right);
        if(root->val == findsum(root)/(left+right+1))
        ans++;
        return left+right+1;
    }
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};