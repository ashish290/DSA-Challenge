class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n = nums.size()-1;
        long long ans = 0;
        for(int i = n; i >= 0; i--){
            if(nums[i] <= ans) {
               ans += nums[i];
            }
            else {
                ans = nums[i];
            }
        }
        return ans;
    }
};