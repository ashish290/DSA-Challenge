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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> qu;
        qu.push({root,{0,0}});
        while(!qu.empty()) {
            auto p = qu.front();
            qu.pop();
            root = p.first;
            int x = p.second.first , y = p.second.second;
            nodes[x][y].insert(root->val);
            if(root->left)
            qu.push({root->left,{x-1,y+1}});
            if(root->right)
            qu.push({root->right,{x+1,y+1}});
        }
        vector<vector<int>>ans;
        for(auto i : nodes) {
            vector<int> col;
            for(auto j : i.second) {
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};