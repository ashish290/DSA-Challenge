class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int s = 0;
        int e = n-1;
        int flag = 0, maxi = 0;
        while(s <= e) {
            flag = nums[s] + nums[e];
            maxi = max(maxi,flag);
            s++;
            e--;
        }
        
        return maxi;
    }
};