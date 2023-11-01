class Solution {
public:
    void dfs(vector<vector<int>>& rooms,vector<bool>& visit,int node) {
        visit[node] = true;
        for(auto &it : rooms[node]){
            if(visit[it] == false)
            dfs(rooms,visit,it);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>visit(n,false);
            dfs(rooms,visit,0);

        for(int i = 0; i < visit.size(); i++) {
            if(visit[i] != true)
            return false;
        }
        return true;
    }
};