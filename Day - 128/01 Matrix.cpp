class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>direction {{0,1}, {1,0}, {0,-1}, {-1,0}};
        vector<vector<int>>result(m,vector<int>(n,-1));
        queue<pair<int,int>>qu;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 0) {
                    result[i][j] = 0;
                    qu.push({i,j});
                }
            }
        } 
        while(!qu.empty()) {
            int first = qu.front().first;
            int second = qu.front().second;
            qu.pop();
            for(auto& it : direction) {
                int i = first + it[0];
                int j = second + it[1];
                if(i >= 0 && i < m && j < n && j >= 0 && result[i][j] == -1) {
                    result[i][j] = 1 + result[first][second];
                    qu.push({i,j});
                }
            }
        }
        return result;
    }
};