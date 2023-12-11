class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        int result = 0;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] == arr[i+1]) {
                cnt++;
            }
            else if(result < cnt) {
                result = cnt;
            }
            else {
                cnt = 0;
            }
        }
        return result;
    }
};