class Solution {
public:
    void print(vector<string>& ans, string& s, int open, int close) {
        if(open == 0 && close == 0) {
            ans.push_back(s);
            return;
        }
        if(open > 0) {
            s.push_back('(');
            print(ans,s,open-1,close);
            s.pop_back();
        }
        if(close > 0) {
            if(open < close) {
                s.push_back(')');
                print(ans,s,open,close-1);
                s.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string>ans;
        print(ans,s,n,n);
        return ans;
    }
};