class Solution {
public:
    int countPalindromicSubsequence(string s) {
       int n = s.size();
       int result = 0;
       unordered_set<char>st;
        for(int i = 0; i < n; i++) {
            st.insert(s[i]);
        }
        for(auto it : st) {
            int left_char = s.find(it);
            int right_char = s.rfind(it);
            if(left_char < right_char) {
            unordered_set<char>find;
            for(int i = left_char+1; i < right_char; i++) {
                find.insert(s[i]);
            }
            result += find.size();
            }
        }
        return result;
    }
};