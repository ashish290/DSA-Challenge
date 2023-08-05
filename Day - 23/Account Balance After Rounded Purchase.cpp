class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int temp = 100 -(purchaseAmount + 5) / 10*10;
        return temp;
    }
};