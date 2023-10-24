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
    vector<int> largestValues(TreeNode* root) {
        if(!root)
        return {};
        vector<int>ans;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()) {
            int n = qu.size();
            int max_val = INT_MIN;

            for(int i = 0; i < n; i++) {
            TreeNode* node = qu.front();
            qu.pop();
            max_val = max(max_val,node->val);

            if(node->left)
            qu.push(node->left);
            if(node->right)
            qu.push(node->right);
            }

            ans.push_back(max_val);
        }
        return ans; 
    }
};