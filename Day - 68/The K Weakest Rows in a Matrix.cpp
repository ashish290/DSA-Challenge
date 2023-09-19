class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int,int>> temp;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            cnt = accumulate(mat[i].begin(), mat[i].end(),0);
            temp.push_back({cnt,i});
        }
        sort(temp.begin(),temp.end());
        vector<int>ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};