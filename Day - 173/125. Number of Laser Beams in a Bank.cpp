class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prev_cnt = 0;
        int result = 0;
        for(int i = 0; i < n; i++) {
            int ones = 0;
            for(auto& it : bank[i]) {
                if(it == '1') {
                    ones++;
                }
            }
            result += (prev_cnt * ones);
            if(ones != 0) {
                prev_cnt = ones;
            }
        }
        return result;
    }
};