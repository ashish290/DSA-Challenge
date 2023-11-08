class Solution {
private:
    void dfs(unordered_map<int,vector<int>>& adj,vector<bool>& visit,int node,long long& size) {
        visit[node] = true;
        size++;
        for(auto& it : adj[node]) {
            if(!visit[it])
                dfs(adj,visit,it,size);
        }
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
         unordered_map<int,vector<int>>adj;
        for(auto& i : edges) {
            int u = i[0];
            int v = i[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visit(n,false);
        long long remNode = n;
        long long result = 0;
        for(int i = 0; i < n; i++) {
            if(!visit[i]) {
               long long size = 0;
               dfs(adj,visit,i,size);
               result += size * (remNode - size);
               remNode = remNode - size;
            }
        }
        return result; 
    }
};