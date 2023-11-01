class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<bool>visited(n,false);
        for(auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            visited[v] = true;
        }
        for(int i = 0; i < visited.size(); i++) {
            if(visited[i] == false){
                ans.push_back(i);
            }
        }
        return ans;
    }
};