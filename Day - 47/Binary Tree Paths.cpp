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
    void store(TreeNode* root, vector<string> &ans, string temp) {
        if(!root)
        return;
        if(root->right || root->left)
        temp += (to_string(root->val) + "->");
        else {
            temp += (to_string(root->val));
            ans.push_back(temp);
        }
        store(root->left,ans,temp);
        store(root->right,ans,temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string temp = "";
        store(root,ans,temp);
        return ans;
    }
};