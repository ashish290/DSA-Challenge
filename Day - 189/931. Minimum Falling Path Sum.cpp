class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>temp(n,vector<int>(n));
        for(int col = 0; col < n; col++) {
            temp[0][col] = matrix[0][col];
        }
        for(int row = 1; row < n; row++) {
            for(int col = 0; col < n; col++) {
                int a = INT_MAX;
                int b = INT_MAX;
                if(col - 1 >= 0) {
                    a = temp[row-1][col-1];
                }
                if(col + 1 < n) {
                    b = temp[row-1][col+1];
                }
                cout<<a<<" "<<b<<" "<<temp[row-1][col]<<endl;
                temp[row][col] = matrix[row][col] + min({temp[row-1][col],a,b});
            }
        }
        int result = INT_MAX;
        int row = n-1;
        for(int col = 0; col < n; col++) {
            if(temp[row][col] < result) {
                result = temp[row][col];
            }
        }
        return result;
    }
}; 