class Solution {
public:
    void palindrome(vector<vector<string>>& ans,vector<string>& temp,int idx,string s) {
        if(idx == s.size()) {
            ans.push_back(temp);
            return;
        }

        for(int i = idx; i < s.size(); i++) {
            if(checkPalindrome(s,idx,i)) {
                temp.push_back(s.substr(idx,i-idx+1));
                palindrome(ans,temp,i+1,s);
                temp.pop_back();
            }
        }
    }

    bool checkPalindrome(string s,int start,int end) {
        while(start <= end) {
            if(s[start++] != s[end--]) 
            return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        palindrome(ans,temp,0,s);
        return ans;
    }
};