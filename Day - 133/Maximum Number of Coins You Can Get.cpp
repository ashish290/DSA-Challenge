class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int sum = 0;
        int s = 0;
        int l = n-1;
        while(s <= l) {
            sum += piles[l-1];
            l = l-1;
            s++;
            l--;
        }
        return sum;
    }
};