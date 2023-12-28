class Solution {
public:
    vector<vector<int>> directions{{1,1},{0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
    bool isSafe(int x, int y, int n, int m) {
        if(x >= 0 && x < n && y >= 0 && y < m)
        return true;
        return false;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(grid[0][0] != 0 || grid[n-1][m-1] != 0) {
            return -1;
        }
        queue<pair<int,int>>qu;
        qu.push({0,0});
        int step = 0;
        grid[0][0] = 1;
        while(!qu.empty()) {
            int N = qu.size();
            while(N--) {
                auto temp = qu.front();
                qu.pop();
                int x = temp.first;
                int y = temp.second;
                if(x == n-1 && y == m-1) {
                    return step+1;
                }
                for(auto dir : directions) {
                    int first = x + dir[0];
                    int second = y +  dir[1];
                    if(isSafe(first,second,n,m) && grid[first][second] == 0) {
                        qu.push({first,second});
                        grid[first][second] = 1;
                    }
                }
            }
                step++;
        }
        return -1;
    }
};