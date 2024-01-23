class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(2);
        unordered_map<int, int> umap;
        for (auto it : nums)
        {
            umap[it]++;
        }
        for (auto it : umap)
        {
            if (it.second >= 2)
                result[0] = it.first;
        }
        for (int i = 1; i <= n; i++)
        {
            if (umap[i] == 0)
            {
                result[1] = i;
            }
        }
        return result;
    }
};