class Solution {
public:
    bool check(string str) {
        int n = str.length();
        for(int i = 0; i < n/2; i++) {
            if(str[i] != str[n-1-i]) 
            return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for (int i = 0; i < n; i++) {
            if(check(words[i]) == true) {
                return words[i];
            }
        }
        return "";
    }
};