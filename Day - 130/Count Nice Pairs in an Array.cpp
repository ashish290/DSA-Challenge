class Solution {
public:
    int rev(int val) {
        string s = to_string(val);
        reverse(s.begin(),s.end());
        int temp = stoi(s);
        return temp;
    }

    int countNicePairs(vector<int>& nums) {
        int mod = 1e9+7;
        int n = nums.size();
        int result = 0;
        unordered_map<int,int>umap;
        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] - rev(nums[i]);
        }
        for(int i = 0; i < n; i++) {
            result = (result + umap[nums[i]]) % mod;
            umap[nums[i]]++;
        }
        return result;
    }
};