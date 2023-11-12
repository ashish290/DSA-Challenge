class Solution {
public:
    int bfs(vector<vector<int>>& visited,vector<vector<int>>& grid,int row, int col,int cnt) {
       vector<pair<int,int>>delta = {{0,-1},{-1,0},{1,0},{0,1}};
       int n = grid.size();
       int m = grid[0].size();
       visited[row][col] = 1;
       queue<pair<int,int>>qu;
       qu.push({row,col});
       while(!qu.empty()) {
            int row = qu.front().first;
            int col = qu.front().second;
            qu.pop();
                for(int i = 0; i < delta.size(); i++) {
                    int nrow = row + delta[i].first;
                    int ncol = col + delta[i].second;
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == 1 && !visited[nrow][ncol]) {
                        cnt++;
                        visited[nrow][ncol] = 1;
                        qu.push({nrow,ncol});
                    }
                }
       }
       return cnt;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int cnt = 0;
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < m; col++) {
                int maxi = 0;
                if(!visited[row][col] && grid[row][col] == 1) {
                    maxi = bfs(visited,grid,row,col,1);
                }
                if(maxi > cnt)
                    cnt = maxi;
            }
        }
        return cnt;
    }
};