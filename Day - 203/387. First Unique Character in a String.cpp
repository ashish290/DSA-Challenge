class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(s[i] == s[j]){
                    cnt++;
                    if(cnt > 1)
                    break;
                }
            }
            if(cnt == 1) {
                return i;
            }
        }
        return -1;
    }
};