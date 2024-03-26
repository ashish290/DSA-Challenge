class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool temp = false;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                temp = true;
            }
            else if(nums[i] <= 0 || nums[i] > n) {
                nums[i] = 1;
            }
        }
        if(temp == false) {
            return 1;
        }
        for(int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if(nums[idx] > 0) {
                nums[idx] *= -1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(nums[i] >= 1) {
                return i+1;
            }
        }
        return n+1;
    }
};