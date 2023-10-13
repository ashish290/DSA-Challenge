class Solution {
public:
    void bfs(vector<vector<int>>& visited,int row, int col,vector<vector<char>>& grid) {
        vector<pair<int,int>> delta = {{0,-1},{-1,0},{0,1},{1,0}};
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
                    grid[nrow][ncol] == '1' && !visited[nrow][ncol]) {
                        visited[nrow][ncol] = 1;
                        qu.push({nrow,ncol});
                    }
                }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        vector<vector<int>> visited(n,vector<int> (m,0));
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < m; col++) {
                if(!visited[row][col] && grid[row][col] == '1') {
                    cnt++;
                    bfs(visited,row,col,grid);
                }
            }
        }
        return cnt;
    }
};