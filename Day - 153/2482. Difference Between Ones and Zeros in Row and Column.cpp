class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>rowone(m,0);
        vector<int>colone(n,0);
        for(int row = 0; row < m; row++) {
            for(int col = 0; col < n; col++) {
                if(grid[row][col] == 1) {
                    rowone[row]++;
                    colone[col]++;
                }
            } 
        } 
        vector<vector<int>>diff(m,vector<int>(n,0));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int OneRowi = rowone[i];
                int OneColj = colone[j];
                int ZeroRowi = m - OneRowi;
                int ZeroColj = n -  OneColj;
                diff[i][j] = OneRowi + OneColj - ZeroRowi - ZeroColj; 
            }
        }
        return diff;
    }
};