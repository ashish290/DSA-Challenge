class Solution {
public:
    bool solve (string& str1, string& str2) {
        if(str1.length() > str2.length())
            return false;
        string x = str2.substr(0,str1.length());
        string y = str2.substr(str2.length()-str1.length());
        return str1 == x && str1 == y;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int result = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(solve(words[i],words[j]))
                result++;
            }
        }
        return result;
    }
};