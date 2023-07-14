class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row_size = matrix.size();
        int col_size = matrix[0].size();

        for (int row = 0; row < row_size; row++)
        {
            for (int col = 0; col < col_size; col++)
            {
                if (target == matrix[row][col])
                {
                    return true;
                }
            }
        }
        return false;
    }
};