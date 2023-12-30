class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char,int>umap;
        for(auto word : words) {
            for(auto c : word) {
                umap[c]++;
            }
        }
        for(auto it : umap) {
            if(it.second % n != 0) 
            return false;
        }
        return true;
    }
};