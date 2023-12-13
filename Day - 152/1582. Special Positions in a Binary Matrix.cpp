class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int result = 0;
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < m; col++) {
                if(mat[row][col] == 0) {
                    continue;
                }
                bool check = true;
                for(int i = 0; i < n; i++) {
                    if(i != row && mat[i][col] == 1) {
                        check = false;
                        break;
                    }
                } 

                for(int j = 0; j < m; j++) {
                    if(j != col && mat[row][j] == 1) {
                        check = false;
                        break;
                    }
                }
                if(check) {
                    result++;                }
            }
        }
        return result;
    }
}; 