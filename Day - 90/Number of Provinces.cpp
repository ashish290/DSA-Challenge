// Using DFS Method
class Solution {
public:
    void dfs(int node,vector<int> adj[],vector<int>& visited) {
        visited[node] = 1;
        for(auto& it:adj[node]) {
            if(!visited[it]) {
                dfs(it,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        // DFS
        int n = isConnected.size();
        vector<int>adj[n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>visited(n,0);
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(visited[i] == 0) {
                dfs(i,adj,visited);
                cnt++;
            }
        }
        return cnt;
    }
};


// Using BFS Method :
class Solution {
public:
    void bfs(unordered_map<int,vector<int>>& adj,vector<bool>& visited,int u) {
        queue<int>qu;
        qu.push(u);
        visited[u] = true;
       while(!qu.empty()) {
           int node = qu.front();
           qu.pop();
            for(auto& it:adj[node]) {
            if(!visited[it]) {
                visited[it] = true;
                qu.push(it);
            }
          }
       }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        // Using BFS.
        int n = isConnected.size();
        unordered_map<int,vector<int>> adj;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(isConnected[i][j] == 1){
                adj[i].push_back(j);
                adj[j].push_back(i);
                }
            }
        }

        int cnt = 0;
        vector<bool>visited(n,0);
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
            bfs(adj,visited,i);
            cnt++;
            }
        }
        return cnt;
    }
};
