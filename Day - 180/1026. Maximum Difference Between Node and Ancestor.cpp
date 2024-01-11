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
    void solve(vector<int>& temp, int& ans,TreeNode* root) {
        if(!root) return;
        for(auto& it : temp) {
            ans = max(ans,abs(root->val - it));
        }
        temp.push_back(root->val);
        solve(temp,ans,root->left);
        solve(temp,ans,root->right);
        temp.pop_back();
    }

    int maxAncestorDiff(TreeNode* root) {
        if(!root) {
            return NULL;
        }
        int ans = INT_MIN;
        vector<int>temp;
        solve(temp,ans,root);
        return ans;
    }
};