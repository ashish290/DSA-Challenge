class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());
        int result = 1;
        int endpoint = points[0][1];
        for(int i = 0; i < n; i++) {
            if(points[i][0] > endpoint) {
                result++;
                endpoint = points[i][1];
            }
            endpoint = min(endpoint,points[i][1]);
        }
        return result;
    }
};