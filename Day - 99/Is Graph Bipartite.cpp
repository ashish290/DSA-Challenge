class Solution {
public:
    bool isBipartiteDFS(vector<vector<int>>& graph,vector<int>& color,int curr,int currcol) {
        color[curr] = currcol;
        for(auto &it : graph[curr]) {
            if(color[it] == color[curr])
            return false;

            if(color[it] == -1) { 
            int colatit = 1 - currcol;

            if(isBipartiteDFS(graph,color,it,colatit) == false)
            return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        // Using DFS :
        // red = 1
        // blue = 0
        int n = graph.size();
        vector<int>color(n,-1);
        for(int i = 0; i < n; i++) {
            if(color[i] == -1) {
                if(isBipartiteDFS(graph,color,i,1) == false)
                return false;
            }
        }
        return true;
    }
};