class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int winner = arr[0];
        int streak = 0;
        int max_val = *max_element(arr.begin(),arr.end());
        if(k >= n)
        return max_val;
        for(int i = 1; i < n; i++) {
            if(arr[i] == max_val)
            return max_val;
            if(winner < arr[i]) {
                winner = arr[i];
                streak = 1;
            } else {
                streak++;
            }
            if(streak == k) {
                return winner;
            }
        }
        return max_val;
    }
};