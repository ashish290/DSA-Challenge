class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>result;
        queue<int>qu;
        for(int i = 1; i < 9; i++) {
            qu.push(i);
        }
        while(!qu.empty()) {
            int a = qu.front();
            qu.pop();
            if(a >= low && a <= high) {
                result.push_back(a);
            }
            int last_digi = a % 10;
            if(last_digi + 1 <= 9) {
                qu.push((a * 10) + (last_digi + 1));
            }
        }
        return result;
    }
};