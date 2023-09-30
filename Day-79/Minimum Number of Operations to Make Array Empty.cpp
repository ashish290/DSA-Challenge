class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> umap;
        for(auto& i : nums)
            umap[i]++;
        
        for(auto& i : umap) {
            int temp = i.second;
            if(temp == 1)
            return -1;
            else
            ans += ((temp + 2) / 3);
        }
        return ans;
    }
};