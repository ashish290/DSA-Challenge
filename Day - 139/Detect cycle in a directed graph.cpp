//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCycle (vector<int> adj[],vector<bool>& visited,vector<bool>& isRecursion,int node) {
        visited[node] = true;
        isRecursion[node] = true;
        for(auto& it : adj[node]) {
            if(!visited[it] && isCycle(adj,visited,isRecursion,it)) {
                return true;
            }  else if(isRecursion[it]) {
                return true;
            }
        }
        isRecursion[node] = false;
        return false;
    } 
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>visited(V);
        vector<bool>isRecursion(V);
        for(int i = 0; i < V; i++) {
            if(!visited[i] && isCycle(adj,visited,isRecursion,i)) {
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends