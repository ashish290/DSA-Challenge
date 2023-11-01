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
void dfs(TreeNode* root, vector<int>& temp) {
   if(root) {
   dfs(root->left,temp);
    temp.push_back(root->val);
   dfs(root->right,temp);
   }
}
    vector<int> findMode(TreeNode* root) {
        if(!root)
        return {};
        vector<int>temp;
        dfs(root,temp);
        unordered_map<int,int> umap;
        int maxi = 0;
        for(auto &it : temp) {
            umap[it]++;
            maxi = max(maxi,umap[it]);
        }
        vector<int>ans;
        for(auto &it : umap) {
            if(it.second == maxi)
            ans.push_back(it.first);
        }
        return ans;
    }
};