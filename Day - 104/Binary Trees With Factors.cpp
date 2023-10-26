class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod = 1e9+7;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,long long>umap;
        umap[arr[0]] = 1;

        for(int i = 1; i < n; i++) {
                int root = arr[i];
                umap[root] = 1;
            for(int j = 0; j < i; j++) {
                int left = arr[j];
                if(root % left == 0 && umap.find(root/left) != umap.end())
                umap[root] += umap[left] * umap[root/left];
            }
        }
        long ans = 0;
        for(auto it : umap) {
            ans = (ans+it.second) % mod;
        }
        return ans;
    }
};