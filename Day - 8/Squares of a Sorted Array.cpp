class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(nums[temp] * nums[temp]);
            temp++;
        }
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
