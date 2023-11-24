class Solution {
public:
    bool isCheck(vector<int>& temp) {
        int diff = temp[0] - temp[1];
        for(int i = 2; i < temp.size(); i++) {
            if(temp[i-1] - temp[i] != diff) {
                return false;
            } 
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool>ans;
        for(int i = 0; i < n; i++) {
            int s = l[i];
            int e = r[i];
            vector<int>temp;
            for(int j = s; j <= e; j++) {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end(),greater<int>());
            ans.push_back(isCheck(temp));
        }
        return ans;
    }
};