class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        nums[j] *= nums[j];
        for(int i = n-1; i > 0; i--) {
            nums[i] *= nums[i];
            if(nums[i] < nums[j]) {
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};