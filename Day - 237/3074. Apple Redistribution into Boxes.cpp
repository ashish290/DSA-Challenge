class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();
        int result = 0;
        int sum1 = accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end(),greater());
        for(int i = 0; i < m; i++) {
            if(sum1 > 0) {
                sum1 -= capacity[i];
                result++;
            }
        }
        return result;
    }
};