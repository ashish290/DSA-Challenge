class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int area = 0;
        int maxi = 0;
        for(int i = 0; i < n; i++) {
            int len = dimensions[i][0];
            int bread = dimensions[i][1];
            int diagonal = (len*len)+(bread*bread);
            if(diagonal > maxi) {
                maxi = diagonal;
                area = len * bread;
            }
            else if(diagonal == maxi) {
                if(area < len * bread) 
                area = len * bread;
            }
        }
        return area;
    }
};