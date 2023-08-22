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
    void check(TreeNode* root,int cnt,bool isLeft) {
        if(!root) return;
        maxStep = max(maxStep,cnt);
        if (isLeft) {
            check(root->left,cnt + 1,false);
            check(root->right,1,true);
        }
        else {
          check(root->right,cnt+1,true);
          check(root->left,1,false);
          }
        }

    int maxStep = 0;
    int longestZigZag(TreeNode* root) {
        check(root,0,true);
        check(root,0,false);
        return maxStep;
    }
};