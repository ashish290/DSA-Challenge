class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>umap;
        for(auto& i:nums) {
            umap[i]++;
        }
        for(auto& i:umap) {
            if(i.second > nums.size()/3)
            ans.push_back(i.first);
        }
        return ans;
    }
};