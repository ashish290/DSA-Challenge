class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        int n = groupSizes.size();
        vector<vector<int>>temp(n+1);
        for(int i = 0; i < n; i++) {
            int val = groupSizes[i];
            temp[val].push_back(i);

            if(temp[val].size() == val){
            ans.push_back(temp[val]);
            temp[val] = {};
            }
        }
        return ans;
    }
};