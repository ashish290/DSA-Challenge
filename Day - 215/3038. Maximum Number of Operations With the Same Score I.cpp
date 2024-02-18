class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[0] + nums[1], result = 1;
        for(int i = 2; i < n; i+=2) {
            if(i+1 == n) {
                break;
            }
            int sum = nums[i] + nums[i+1];
            if(temp == sum) {
                result++;
            }
            else {
                break;
            }
        }
        return result;
    }
};