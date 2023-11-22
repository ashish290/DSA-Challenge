class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        map<int,vector<int>>map;
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                map[i+j].push_back(mat[i][j]);
            }
        }
        for(auto& i : map) {
            if((i.first) % 2 == 0) {
                reverse(i.second.begin(),i.second.end());
            }
            for(auto& it : i.second) {
                ans.push_back(it);
            }
        }
        return ans;
    }
};