class Solution {
public:
    void combinations(vector<vector<int>>& ans,vector<int>& temp,int k,int n,int idx,int sum) {
        if(sum == n && k == 0){
            ans.push_back(temp);
            return;
        }
            for(int i = idx; i <= 9; i++) {
                // if(i > n)
                // break;
            temp.push_back(i);
            combinations(ans,temp,k-1,n,i+1,sum+i);
            temp.pop_back();
            }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        combinations(ans,temp,k,n,1,0);
        return ans;
    }
};