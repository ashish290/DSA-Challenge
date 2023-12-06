class Solution {
public:
    int totalMoney(int n) {
        int cnt = 1;
        int money = 0;
        
        while(n > 0) {
          for(int i = 0; i < min(n,7); i++) {
            money += cnt + i;
          }
          n -= 7;
          cnt++;
        }
        return money;
    }
};