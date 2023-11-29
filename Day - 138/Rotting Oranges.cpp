class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int result = 0;
        vector<vector<int>>dir = {{1,0},{0,1},{-1,0},{0,-1}};
        queue<pair<int,int>>qu;
        for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++) {
            if (grid[i][j] == 1)
            result++;
            else if(grid[i][j] == 2) 
            qu.push({i,j});
          }
        }
        int time = 0;
        while(result != 0 && !qu.empty()) {
          int q = qu.size();
          for(int i = 0; i < q; i++) {
          int first = qu.front().first;
          int second = qu.front().second;
          qu.pop();
          for(auto it : dir) {
            int i = first + it[0];
            int j = second + it[1];
                if(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1) {
                  grid[i][j] = 2;
                  result--;
                  qu.push({i,j});
                }
              }
            }
          time++;
        }
        if(result == 0) {
          return time;
        }
        return -1;
    }
};