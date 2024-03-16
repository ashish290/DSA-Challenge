class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int isZero = 1;
        vector<int>result;
        int Zero_cnt = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                prod *= nums[i];
            }
            isZero *= nums[i];
            if(nums[i] == 0) {
                Zero_cnt++;
            }
        } 
        if(Zero_cnt > 1) {
            for(int i = 0; i < n; i++) {
                result.push_back(0);
            }
            return result;
        }
        for(int i = 0; i < n; i++) {
            if(isZero != 0) {
                result.push_back(prod / nums[i]);
            }
            else {
                if(nums[i] != isZero) {
                    result.push_back(isZero);
                }
                else {
                    result.push_back(prod);
                }
            }
        }
        return result;
    }
};