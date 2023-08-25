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
    void NodeSum(TreeNode* root, int &sum,int flag) {
        if(!root) return;
        if(root->left == NULL && root->right == NULL){
            sum += (root->val * flag);
        }

        NodeSum(root->left, sum, 1);
        NodeSum(root->right, sum, 0);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return NULL;
        int sum = 0;
         NodeSum(root, sum,0);
         return sum;
    }
};