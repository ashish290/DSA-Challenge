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
    int check(TreeNode* root,int cnt,bool isLeft) {
        if(root) {
        if (isLeft) 
          return max(check(root->left,1,true),check(root->right,cnt+1,false));
        else 
           return max(check(root->left,cnt + 1,true),check(root->right,1,false));
        }
          return cnt-1;
        }


    int longestZigZag(TreeNode* root) {
        return check(root,0,true);
    }
};
