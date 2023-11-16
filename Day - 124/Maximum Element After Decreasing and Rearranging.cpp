class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        int result = 1;
        sort(arr.begin(),arr.end());
        if(arr[0] != 1) {
            arr[0] = 1;
        } 
        for(int i = 1; i < n; i++) {
            if(abs(arr[i] - arr[i-1]) > 1) {
                arr[i] = arr[i-1] + 1;
            }
            if(result < arr[i]) {
                result = arr[i];
            }
        }
        return result;
    }
};