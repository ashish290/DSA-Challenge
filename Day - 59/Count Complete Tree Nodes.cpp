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
    int countNodes(TreeNode* root) {
        if(!root) 
        return 0;
        int cnt = 0;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()) {
            vector<int>ans;
            int size = qu.size();
            for(int i = 0; i < size; i++) {
                root = qu.front();
                qu.pop();
                ans.push_back(root->val);
                if(root->left)
                qu.push(root->left);
                if(root->right)
                qu.push(root->right);
            }
                cnt += ans.size();
        }
        return cnt;
    }
};