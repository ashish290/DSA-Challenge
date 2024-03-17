class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int maxi = 0;
            if(nums[i] > 9) {
                string s = to_string(nums[i]);
                int len = s.length();
                for(int j = 0; j < len; j++) {
                    maxi = max(maxi,(s[j] - '0'));
                }
                string str ="";
                for(int k = 0; k < len; k++) {
                    str += to_string(maxi);
                }
                nums[i] = stoi(str);
            }
        }
        int result = accumulate(nums.begin(),nums.end(),0);
        return result;
    }
};