class Solution {
public:
    void dfs(unordered_map<int,vector<int>>& adj,vector<int>& ans,set<int>& v,int node) {
        if(v.find(node) != v.end())
        return ;
        ans.push_back(node);
        v.insert(node);

        for(auto& it : adj[node]) {
            dfs(adj,ans,v,it);
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
       int n = adjacentPairs.size();
       unordered_map<int,vector<int>>adj;
       for(auto& it : adjacentPairs) {
           int u = it[0];
           int v = it[1];
           adj[u].push_back(v);
           adj[v].push_back(u);
       }
       set<int>visited;
       vector<int>ans;
       int temp = 0;
       for(auto it : adj) {
           if(it.second.size() == 1) {
               temp = it.first;
           }
       }
        dfs(adj,ans,visited,temp);
       return ans;
    }
};