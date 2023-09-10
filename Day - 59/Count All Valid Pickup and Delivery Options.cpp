class Solution {
public:
int m = 1e9+7;
    int countOrders(int n) {
        if(n == 1)
        return 1;
        long long result = 1;
        for(int i = 2; i <= n; i++) {
            int space = (i-1)*2+1;
            int possibility = space * (space+1)/2;
            result *= possibility;
            result %= m;
        }
        return result;
    }
};
