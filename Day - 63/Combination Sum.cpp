class Solution {
public:
    void print(vector<int>& candidates,vector<int>& store,vector<vector<int>>& ans,int target,int n,int idx) {
       if(idx == n) {
           if(target == 0)
           ans.push_back(store);
           return;
       }
       //For take function
       if(candidates[idx] <= target) {
       store.push_back(candidates[idx]);
       print(candidates,store,ans,target - candidates[idx],n,idx);
       store.pop_back();
       }
       //For not take function
       print(candidates,store,ans,target,n,idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>store;
        int n = candidates.size();
        print(candidates,store,ans,target,n,0);
        return ans;
    }
};