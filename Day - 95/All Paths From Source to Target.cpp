class Solution {
public:
    void dfs(vector<int>& temp,vector<vector<int>>& ans,vector<vector<int>>& graph,int s,int e) {
        temp.push_back(s);
        if(s == e) {
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        for(auto it : graph[s]) {
            dfs(temp,ans,graph,it,e);
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int s = 0;
        int e = graph.size()-1;
        vector<int>temp;
        vector<vector<int>>ans;
        dfs(temp,ans,graph,s,e);
        return ans;
    }
};