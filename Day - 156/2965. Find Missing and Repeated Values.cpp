class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>result;
        int n = grid.size();
        unordered_map<int,int>umap;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                umap[grid[i][j]]++;
            }
        }
        int a = -1, b = -1;
        for(int i = 1; i <= n*n; i++) {
            if(umap[i] == 2) {
                a = i;
            }
            else {
                if(umap[i] == 0)
                b = i;
            }
        }
        result.push_back(a);
        result.push_back(b);
        return result;
    }
}; 