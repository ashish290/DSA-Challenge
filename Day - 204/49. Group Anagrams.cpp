class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>umap;
        for(auto it : strs) {
            string temp = it;
            sort(temp.begin(),temp.end());
            umap[temp].push_back(it);
        }
        for(auto it : umap) {
            result.push_back(it.second);
        }
        return result;
    }
}; 