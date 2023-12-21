class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int val = money;
        sort(prices.begin(),prices.end());
        for(int i = 0; i < 2; i++) {
            if(prices[i] >= val) {
                return val;
            }
            money -= prices[i];
            if(money < 0) {
                return val;
            }
        }
        return money;
    }
};