class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1 = word1.size();
        int size2 = word2.size();
        string ans = "";
        int n = max(size1,size2);
        for(int i = 0; i < n; i++) {
            if(size1){
                ans += word1[i];
                size1--;
            }
            if(size2){
                ans += word2[i];
                size2--;
            }
        }
        return ans;
    }
};