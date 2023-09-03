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
    bool checkTree(TreeNode* root) {
        if(!root) {
            return true;
        }
        int sum = 0;
        if(root->left || root->right) {
            sum = root->left->val + root->right->val;
        }
        checkTree(root->left);
        checkTree(root->right);

        if(sum == root->val) return true;
        else return false;
    }
};