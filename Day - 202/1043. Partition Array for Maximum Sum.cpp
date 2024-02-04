class Solution {
public:
    int dp[501];
    int solve(vector<int>& arr, int k, int i) {
        if(i >= arr.size()) {
            return 0;
        }
        if(dp[i] != -1) {
            return dp[i];
        }
        int result = 0;
        int curr_max = INT_MIN;
        for(int j = i; j < arr.size() && j-i+1 <= k; j++) {
            curr_max = max(curr_max,arr[j]);
            result = max(result,((j-i+1)*curr_max)+solve(arr,k,j+1));
        }
        return dp[i] = result;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(arr,k,0);
    }
};