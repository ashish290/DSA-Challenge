class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) 
        return 0;
        int diff = nums[1] - nums[0];
        int result = 0;
        int cnt = 2;
        int temp = 1;
        for(int i = 2; i < n; i++) {
            if(nums[i] - nums[i-1] == diff) {
                cnt++;
                if(cnt >= 3) {
                    result += temp;
                    temp++;
                }
            }
            else {
                diff = nums[i] - nums[i-1];
                cnt = 2;
                temp = 1;
            }
        }
        return result;
    }
};