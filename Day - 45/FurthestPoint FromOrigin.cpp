class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char,int>umap;
        for(auto i:moves) {
            umap[i]++;
        }
        return max(umap['L'] , umap['R']) - min(umap['L'] , umap['R']) + umap['_'];
    }
};