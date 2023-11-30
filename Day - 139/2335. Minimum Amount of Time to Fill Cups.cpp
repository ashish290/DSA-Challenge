class Solution {
public:
    int fillCups(vector<int>& amount) {
        int n = amount.size();
        int result = 0;
        sort(begin(amount),end(amount));
        while(amount[2] && amount[1]) {
            result++;
            amount[2]--;
            amount[1]--;
            sort(begin(amount),end(amount));
        }
        result += amount[2];
        return result;
    }
};