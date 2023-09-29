class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increment = true;
        bool decrement = true;
        
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] > nums[i+1])
            increment = false;
            if(nums[i] < nums[i+1])
            decrement = false;
        }
        return increment || decrement;
    }
};