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
private:
     int FindSum(TreeNode* root,int sum){
        if(root){
           int ans = (2 * sum) + root-> val;
            if(!root->left && !root->right) {
                return ans;
            }
            return FindSum(root->left,ans) + FindSum(root->right,ans);
        }
        return 0;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return FindSum(root,0);
    }
};