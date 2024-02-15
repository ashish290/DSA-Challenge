class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        using value_type = int64_t;
        sort(nums.begin(),nums.end());
        vector<value_type>sum(n);
        sum[0] = nums[0];
        for(int i = 1; i < n; i++) {
            sum[i] = sum[i-1] + nums[i];
        }
        for(int i = n-1; i > 0; i--) {
            if(sum[i-1] > nums[i]) {
                value_type result = sum[i-1] + nums[i];
                return result;
            }
        }
        return -1; 
    }
};