class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>result(n/3,vector<int>(3));
        int idx = 0;
        for(int i = 0; i < n; i+=3) {
            if(abs(nums[i] - nums[i+2]) <= k && i+2 < n) {
                result[idx] = {nums[i],nums[i+1],nums[i+2]};
                idx++;
            }
            else {
                return vector<vector<int>>();
            }
        }
        return result;
    }
};