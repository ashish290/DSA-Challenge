class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto it : nums) {
            umap[it]++;
        }
        for(auto it : umap) {
            if(it.second > 2) {
                return false;
            }
        }
        return true;
    }
};