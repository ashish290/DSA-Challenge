//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool bfs(vector<int> adj[],vector<int>& visited,int node) {
    queue<pair<int,int>>qu;
    
    qu.push({node,-1});
    visited[node] = true;
    while(!qu.empty()) {
        pair<int,int> p = qu.front();
        qu.pop();
        int source = p.first;
        int parent = p.second;
        for(auto it : adj[source]) {
            if(!visited[it]) {
              visited[it] = 1;
              qu.push({it,source});
            }
            else if(it != parent) 
            return true;
        }
    }
    return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>visited(V,0);
        for(int i = 0; i < V; i++) {
            if(!visited[i] && bfs(adj,visited,i))
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends