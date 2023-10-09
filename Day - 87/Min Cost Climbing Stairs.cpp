class Solution {
public:
int dp[1001];
    int solve(vector<int>& cost,int n) {
        if(n == 1 || n == 0)
        return 0;

        if(dp[n] != -1) 
        return dp[n];

        int first = cost[n-1]+solve(cost,n-1);
        int second = cost[n-2]+solve(cost,n-2);
        return dp[n] = min(first,second);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        int n = cost.size();
        return solve(cost,n);
    }
};