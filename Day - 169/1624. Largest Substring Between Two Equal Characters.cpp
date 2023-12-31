class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        if(n <= 2) return 0;
        int result = -1;
        int i_cnt = 1;
        for(int i = 0; i < n; i++) {
            int max_cnt = 0;
            int j_cnt = 1;
            for(int j = n; j >= i; j--) {
                if(s[i] == s[j]) {
                    max_cnt = n - ((i+1) + j_cnt);
                    result = max(result,max_cnt);
                }
                j_cnt++;
            }
        }
        cout<<result;
        if(result >= 0) 
        return result+1;
        return result;
    }
};