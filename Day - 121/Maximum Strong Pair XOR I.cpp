class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        int result = INT_MIN;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int x = nums[i], y = nums[j];
                if(abs(x - y) <= min(x,y)) {
                    int maxi = (x^y);
                    if(maxi > result)
                    result = maxi;
                }
            }
        }
        return result;
    }
};