class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> umap;
        int result = 0;
        for(auto it : t) {
            umap[it]++;
        }
        for(auto it : s) {
            if(umap[it] > 0)
            umap[it]--;
            else 
            result++;
        }
        return result;
    }
};