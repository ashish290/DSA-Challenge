class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int>indegree(numCourses,0);
       unordered_map<int,vector<int>>adj;
        for(auto &it : prerequisites) {
            int a = it[0];
            int b = it[1];
            adj[b].push_back(a);
            indegree[a]++;
        }
        queue<int>qu;
        vector<int>result;
        for(int i = 0; i < numCourses; i++) {
            if(indegree[i] == 0) {
            result.push_back(i);
            qu.push(i);
            }
        }
        while(!qu.empty()) {
            int node = qu.front();
            qu.pop();
            for(auto &it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0) {
                    result.push_back(it);
                    qu.push(it);
                }
            }
        }
        if(result.size() == numCourses)
        return result;

        return {};
    }
};