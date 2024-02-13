class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // different approch --> time : O(nlogn)
        int n = nums.size();
        if(n <= 1) {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int cnt = 1;
        int result = INT_MIN;
        int idx = 0;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] == nums[i+1]) {
                cnt++;
                if(cnt > result) {
                    result = cnt;
                    idx = nums[i];
                }
            }
            else {
                cnt = 1;
            }
        }
        return idx;
    }
};