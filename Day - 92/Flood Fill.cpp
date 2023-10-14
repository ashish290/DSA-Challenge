class Solution {
public:
    void dfs(int row, int col,int newColor,int initialColor,vector<vector<int>>& image,vector<vector<int>>& ans,int delrow[],int delcol[]) {
        ans[row][col] = newColor;
        int n = image.size();
        int m = image[0].size();

        for(int i = 0; i < 4; i++) {
            int nr = row + delrow[i];
            int nc = col + delcol[i];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m && image[nr][nc] == initialColor && ans[nr][nc] != newColor) {
                dfs(nr,nc,newColor,initialColor,image,ans,delrow,delcol);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        vector<vector<int>>ans = image;
        dfs(sr,sc,color,initialColor,image,ans,delrow,delcol);
        return ans;
    }
};