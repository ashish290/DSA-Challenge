class Solution {
public:
    void print(vector<int>&nums,vector<int>&temp,set<vector<int>>& s,int idx) {
        if(idx == nums.size()) {
            if(temp.size() >= 2)
            s.insert(temp);
            return;
        }

        print(nums,temp,s,idx+1);
        if(temp.size() == 0 || temp[temp.size()-1] <= nums[idx]) {
        temp.push_back(nums[idx]);
        print(nums,temp,s,idx+1);
        temp.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>>ans;
        vector<int>temp;
        print(nums,temp,s,0);
        for(auto i = s.begin(); i != s.end(); i++) {
            ans.push_back(*i);
        }
        return ans;
    }
};