class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty() || matrix[0].empty()){
            return false;
        }
        int row_size = matrix.size();
        int col_size = matrix[0].size();
      
        int start = 0;
        int end = (row_size * col_size) - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(matrix[mid/col_size] [mid%col_size] == target){
                return true;
            }
            else if(target > matrix[mid/col_size] [mid%col_size]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        } 
        return false;
    }
};
