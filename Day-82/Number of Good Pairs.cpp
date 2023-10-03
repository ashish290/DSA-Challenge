class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Most optimual way to do :
        unordered_map<int,int>umap;
        int val = 0;
        for(auto& i : nums) {
            umap[i]++;
        }
        for(auto& i : umap) {
            int temp = i.second;
            val += temp*(temp - 1) / 2;
        }
        return val;
    }
};