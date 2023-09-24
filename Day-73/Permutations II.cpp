class Solution {
public:
    void print(vector<int>& nums,vector<vector<int>>& ans, int idx) {
        if(idx >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = idx; i < nums.size(); i++) {
            swap(nums[i],nums[idx]);
            print(nums,ans,idx+1);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans,temp;
        print(nums,ans,0);
        map<vector<int>,int>umap;
        for(int i = 0; i < ans.size(); i++) {
            umap[ans[i]]++;
        }
        for(auto & i : umap) 
        temp.push_back(i.first);
        return temp;
    }
};