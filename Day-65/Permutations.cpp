class Solution {
public:
    void print(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp, int idx,unordered_map<int,int>&umap) {
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(!umap[nums[i]]) {
            temp.push_back(nums[i]);
            umap[nums[i]] = 1;
            print(nums,ans,temp,idx+1,umap);
            umap[nums[i]] = 0;
            temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        unordered_map<int,int>umap;
        for(auto i : nums) {
            umap[i] = 0;
        }
        print(nums,ans,temp,0,umap);
        return ans;
    }
};