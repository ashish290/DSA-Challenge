class Solution {
public:
    void print(vector<vector<int>>& ans, vector<int>& temp,int n,int k,int idx) {
        if(temp.size() == k) {
            ans.push_back(temp);
            return;
        }
        if(idx == n+1)
        return;

            temp.push_back(idx);
            print(ans,temp,n,k,idx+1);
            temp.pop_back();

            print(ans,temp,n,k,idx+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        print(ans,temp,n,k,1);
        return ans;
    }
};