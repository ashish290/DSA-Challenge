class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        sort(s.begin(),s.end());
        int i = 0, j = 0;
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == '1') {
                swap(s[i],s[j]);
                j++;
            }
        }
        return s;
    }
}; 