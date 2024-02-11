class Solution {
public:
    bool isSafe(int row, int col, int n, vector<string>& board) {
        int temp_row = row;
        int temp_col = col;
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q')
            return false;
            row--;
            col--;
        }
        row = temp_row;
        col = temp_col;
        while(col >= 0) {
            if(board[row][col] == 'Q')
            return false;
            col--;
        }
        row = temp_row;
        col = temp_col;
        while(row < n && col >= 0) {
            if(board[row][col] == 'Q')
            return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int  n, vector<vector<string>>& ans, vector<string>& board, int col) {
        if(col == n) {
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++) {
            if(isSafe(row,col,n,board)) {
                board[row][col] = 'Q';
                solve(n,ans,board,col+1);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        solve(n,ans,board,0);
        return ans;
    }
};