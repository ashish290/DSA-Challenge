class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int s = 0;
        int e = n - 1;
        while( s < e) {
            if(nums[s] + nums[e] == k) {
              cnt++;
              s++;
              e--;
            }
            else if(nums[s] + nums[e] < k) {
                s++;
            }
            else{
                e--;
            }
        }
        return cnt;
    }
};