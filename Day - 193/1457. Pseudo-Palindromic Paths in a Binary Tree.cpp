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
    int result = 0;
    void check(TreeNode* root,vector<int>& temp) {
        if(!root) {
            return;
        }
        temp[root->val]++;
        if(root->left == NULL && root->right == NULL) {
            int odd_cnt = 0;
            for(int i = 0; i <= 9; i++) {
                if(temp[i] % 2 != 0) {
                    odd_cnt++;
                }
            }
            if(odd_cnt <= 1) {
                result++;
            }
        }
        check(root->left,temp);
        check(root->right,temp);
        temp[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>temp(10,0);
        check(root,temp);
        return result;
    }
};