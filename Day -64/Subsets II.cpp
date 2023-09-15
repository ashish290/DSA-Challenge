class Solution {
public:
    void print(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,int n, int idx,set<vector<int>>& s) {
        if(idx >= n) {
            s.insert(temp);
            return;
        } 
        temp.push_back(nums[idx]);
        print(nums,ans,temp,n,idx+1,s);
        temp.pop_back();
        print(nums,ans,temp,n,idx+1,s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>s;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        print(nums,ans,temp,n,0,s);
        for(auto i = s.begin(); i != s.end(); i++) {
            ans.push_back(*i);
        }
        return ans;
    }
};