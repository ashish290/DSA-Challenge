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
    void print(vector<vector<int>>& ans,vector<int>& temp,TreeNode* root,int targetSum,int sum) {
        if(!root) 
        return;

        if(root->left == NULL && root->right == NULL) {
            if(sum == targetSum) 
                ans.push_back(temp);
        }
         sum += root->val;
         temp.push_back(root->val);
        print(ans,temp,root->left,targetSum,sum);
        print(ans,temp,root->right,targetSum,sum);
        temp.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        print(ans,temp,root,targetSum,0);
        return ans;
    }
};