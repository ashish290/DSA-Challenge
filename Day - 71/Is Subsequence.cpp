class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for(int i = 0; i < s.length(), i < t.length(); i++) {
            if(s[j] == t[i]) {
                j++;
            }
        }
        if (j == s.length())
        return true;
        else 
        return false;
    }
};