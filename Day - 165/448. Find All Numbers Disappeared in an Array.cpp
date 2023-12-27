class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        vector<int>temp(n+1,0);
        for(auto it : nums) {
            temp[it]++;
        }
        for(int i = 1; i < temp.size(); i++) {
            if(temp[i] == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};