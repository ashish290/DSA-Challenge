class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int max_time = 0;
        for(auto& it : left) {
            max_time = max(it,max_time);
        }
        for(auto& it : right) {
            max_time = max(max_time,n-it);
        }
        return max_time;
    }
};