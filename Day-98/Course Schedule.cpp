class Solution {
public:
    bool check(unordered_map<int,vector<int>>& adj,int n,vector<int>& indegree) {
        queue<int>qu;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(indegree[i] == 0) {
            cnt++;
            qu.push(i);
            }
        }
            while(!qu.empty()) {
                int node = qu.front();
                qu.pop();
                for(auto &it : adj[node]) {
                    indegree[it]--;
                    if(indegree[it] == 0) {
                        cnt++;
                        qu.push(it);
                }
            }
        }
        if(cnt == n)
        return true;

        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        vector<int>indegree(numCourses,0);

        for(auto &it : prerequisites) {
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        return check(adj,numCourses,indegree);
    }
};