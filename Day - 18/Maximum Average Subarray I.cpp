class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Using sliding window approch.
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < k; i++) {
          sum += nums[i];
        }
        int maxsum = sum;
        int startIdx = 0;
        int lastIdx = k;
        while(lastIdx != n) {
            sum -= nums[startIdx];
            startIdx++;

            sum += nums[lastIdx];
            lastIdx++;

        maxsum = max(maxsum,sum);
        }
        return (double) maxsum / k;
    }
};