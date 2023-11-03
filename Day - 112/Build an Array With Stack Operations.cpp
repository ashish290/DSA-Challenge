class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int num = 1;
        int i = 0;
        while(i != target.size()) {
            if(target[i] == num) {
                ans.push_back("Push");
                i++;
            }
            else {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            num++;
        }
        return ans;
    }
};