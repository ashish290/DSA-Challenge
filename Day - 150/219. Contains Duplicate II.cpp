class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int>uset;
        int i = 0;
        int j = 0;
        while(j < n) {
            if(abs(i - j) > k) {
                uset.erase(nums[i]);
                i++;
            }
            if(uset.find(nums[j]) != uset.end()) {
                return true;
            }
            uset.insert(nums[j]);
            j++;
        }
        return false;
    }
};