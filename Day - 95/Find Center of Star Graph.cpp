class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>adj;
        for(int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]]++;
            adj[edges[i][1]]++;
        }
        int temp = 0;
        int ans = 0;
        for(auto it : adj) {
            if(it.second > temp) {
                temp = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};