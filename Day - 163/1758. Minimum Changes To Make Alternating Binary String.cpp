class Solution {
public:
    int minOperations(string s) {
        int zero_cnt = 0;
        int ones_cnt = 0;
        for(int i = 0; i < s.size(); i++) {
            if(i % 2 == 0) {
                if(s[i] == '0') 
                ones_cnt++;
                else 
                zero_cnt++;
            }
            else {
                if(s[i] == '1')
                ones_cnt++;
                else 
                zero_cnt++;
            }
        }
        return min(zero_cnt,ones_cnt);
    }
};