class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
        bitset<32>ashish(i);
        int temp = ashish.count();
        if(temp == k)
        sum += nums[i];
        }
        return sum;
    }
};