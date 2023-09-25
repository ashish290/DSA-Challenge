class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(auto i : s+t) {
            ans ^= i;
        }
        return ans;
    }
};