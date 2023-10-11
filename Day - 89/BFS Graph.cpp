class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int visited[V] = {0};
        visited[0] = 1;
        vector<int>ans;
        queue<int>qu;
        qu.push(0);
        while(!qu.empty()) {
            int node = qu.front();
            qu.pop();
            ans.push_back(node);
            for(auto& it : adj[node]) {
                if(visited[it] == 0) {
                qu.push(it);
                visited[it] = 1;
                }
            }
        }
        return ans;
    }
};