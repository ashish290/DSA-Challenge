class Solution {
public:
    int MOD = 1e9+7;
    int countHomogenous(string s) {
        int length  = 0 , result = 0;

        for(int i = 0; i < s.size(); i++) {
            if(i > 0 && s[i-1] == s[i]) {
                length += 1;
            }else {
                length = 1;
            }
            result = (result + length) % MOD;
        }
        return result;
    }
};