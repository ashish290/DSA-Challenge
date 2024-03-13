class Solution {
public:
    int pivotInteger(int n) {
        int total_sum = (n + 1) * n/2;
        int pref_sum = 0;
        for(int i = 1; i <= n; i++) {
            total_sum -= i;
            if(total_sum == pref_sum) {
                return i;
            }
            pref_sum += i;
        }
        return -1;
    }
};