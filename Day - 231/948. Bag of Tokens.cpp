class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int score = 0;
        int max_scr = 0;
        sort(tokens.begin(),tokens.end());
        int low = 0, high = n-1;
        while(low <= high) {
            if(tokens[low] <= power) {
                power -= tokens[low];
                score++;
                low++;
                max_scr = max(max_scr,score);
            }
            else if(score >= 1) {
                power += tokens[high];
                score--;
                high--;
            }
            else {
                return max_scr;
            }
        }
        return max_scr;
    }
};