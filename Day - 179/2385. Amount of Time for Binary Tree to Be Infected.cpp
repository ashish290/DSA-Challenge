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
    void Graph(TreeNode* root,unordered_map<int,vector<int>>& adj,int parent) {
        if(!root) 
        return;
        if(parent != -1) {
            adj[root->val].push_back(parent);
        }
        if(root->left) {
            adj[root->val].push_back(root->left->val);
        }
        if(root->right) {
            adj[root->val].push_back(root->right->val);
        }
        Graph(root->left,adj,root->val);
        Graph(root->right,adj,root->val);
    }

    int amountOfTime(TreeNode* root, int start) {
        if(!root) {
            return NULL;
        }
        unordered_map<int,vector<int>>adj;
        unordered_set<int>visited;
        visited.insert(start);
        int result = -1;
        Graph(root,adj,-1);
        queue<int>qu;
        qu.push(start);
        while(!qu.empty()) {
            int n = qu.size();
            result++;
            while(n--) {
                int temp = qu.front();
                qu.pop();
                for(auto& it : adj[temp]) {
                    if(visited.find(it) == visited.end()) {
                        qu.push(it);
                        visited.insert(it);
                    }
                }
            }
        }
        return result;
    }
};