class Solution {
  public:
    bool dfs(vector<int> adj[],vector<bool>& visit,int node,int parent) {
        visit[node] = true;
        for(auto& it:adj[node]) {
            if(it == parent)
            continue;
            
            if(visit[it] || dfs(adj,visit,it,node))
            return true;
            
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visit(V,false);
        for(int i = 0; i < V; i++) {
            if(!visit[i] && dfs(adj,visit,i,-1)) {
            return true;
            }
        }
        return false;
    }
};