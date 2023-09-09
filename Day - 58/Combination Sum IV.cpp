class Solution {
public:
int dp[201][1001];
    int CheckSum(vector<int>& nums, int target,int idx) {
        if(target == 0)
        return 1;
        if(target <= 0 || idx >= nums.size())
        return 0;
        if(dp[idx][target] != -1)
        return dp[idx][target];

        int take = CheckSum(nums,target - nums[idx],0);
        int notTake = CheckSum(nums,target,idx+1);

        return dp[idx][target] = take + notTake;
    }
    int combinationSum4(vector<int>& nums, int target) {
        int idx = 0;
        memset(dp,-1,sizeof(dp));
        return CheckSum(nums,target,idx);
    }
};