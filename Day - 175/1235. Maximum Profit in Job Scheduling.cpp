class Solution {
public:
int n;
int dp[50001];
    int isNext(vector<vector<int>>& array, int l, int currentJobEnd) {
        int r = n-1;
        int result = n+1;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(array[mid][0] >= currentJobEnd) {
                result = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        return result;
    }
    int solve(vector<vector<int>>& temp, int i) {
        if(i >= n)
        return 0;
        if(dp[i] != -1) {
            return dp[i];
        }
        int taken = temp[i][2] + solve(temp,isNext(temp,i+1,temp[i][1]));
        int notTaken = solve(temp,i+1);
        return dp[i] = max(taken,notTaken);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n = startTime.size();
        memset(dp,-1,sizeof(dp));
        vector<vector<int>>temp(n,vector<int>(3,0));
        for(int i = 0; i < n; i++) {
            temp[i][0] = startTime[i];
            temp[i][1] = endTime[i];
            temp[i][2] = profit[i];
        }
        sort(temp.begin(),temp.end());
        return solve(temp,0);
    }
};