class Solution {
public:
    int dp[10001];
    int solve(int n) {
        if(n == 0) {
            return 0;
        }
        int min_cnt = INT_MAX;
        if(dp[n] != -1) {
            return dp[n];
        } 
        for(int i = 1; i*i <= n; i++) {
            cout<<i<<" ";
            int result = 1 + solve(n-i*i);
            cout<<result<<endl;
            min_cnt = min(min_cnt,result);
        }
        return dp[n] = min_cnt; 
    }
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};