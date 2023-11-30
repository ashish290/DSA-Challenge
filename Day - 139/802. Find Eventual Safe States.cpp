class Solution {
public:
    bool isCycle(vector<vector<int>>& graph,vector<bool>& visited,vector<bool>& isRecursion,int node) {
        visited[node] = true;
        isRecursion[node] = true;
        for(auto& it : graph[node]) {
            if(!visited[it] &&  isCycle(graph,visited,isRecursion,it)) {
                return true;
            }else if(isRecursion[it] == true) {
                return true;
            }
        }
        isRecursion[node] = false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool>visited(n,false);
        vector<bool>isRecursion(n,false);
        vector<int>result;
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                isCycle(graph,visited,isRecursion,i);
            }
        }
        for(int i = 0; i < isRecursion.size(); i++) {
            if(isRecursion[i] == false) 
            result.push_back(i);
        }
        return result;
    }
};