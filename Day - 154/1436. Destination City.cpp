class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        unordered_map<string,int>umap;
        for(auto &it : paths) {
            string temp = it[0];
            umap[temp]++;
        }
        for(auto &it : paths) {
      l      string check = it[1];
            if(umap[check] == 0) {
                return check;
            }
        }
        return "";
    }
};