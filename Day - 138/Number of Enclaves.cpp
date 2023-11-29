class Solution {
public:
    void bfs(vector<vector<int>>& grid,int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dir = {{0,1},{0,-1},{1,0},{-1,0}};
        queue<pair<int,int>>qu;
        grid[i][j] = 0;
        qu.push({i,j});
        while(!qu.empty()) {
            int first = qu.front().first;
            int second = qu.front().second;
            qu.pop();
            for(auto& it : dir) {
                int i_idx = first + it[0];
                int j_idx = second + it[1];
                if(i_idx >= 0 && i_idx < n && j_idx >= 0 && j_idx < m 
                && grid[i_idx][j_idx] == 1) {
                    grid[i_idx][j_idx] = 0;
                    qu.push({i_idx,j_idx});
                }
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int result = 0;
        for(int i = 0; i < n; i++) {
            int j = 0;
            if(grid[i][j] == 1)
                bfs(grid,i,j);
            j = m-1;
            if(grid[i][j] == 1)
                bfs(grid,i,j);
        }
        for(int j = 0; j < m; j++) {
            int i = 0;
            if(grid[i][j] == 1) 
            bfs(grid,i,j);
            i = n-1;
            if(grid[i][j] == 1) 
            bfs(grid,i,j);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) 
                result++;
            }
        }
        return result;
    }
};
