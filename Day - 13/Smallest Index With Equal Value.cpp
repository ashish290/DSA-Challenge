class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        for(int i = 0; i < n; i++){
          temp = i % 10;
          if(temp == nums[i]){
              return i;
              break;
          }
        }
        return -1;
    }
};