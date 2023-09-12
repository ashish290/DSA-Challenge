class Solution {
public:
    int minDeletions(string s) {
        int cnt = 0;
        unordered_map<char,int>umap;
        for(auto i:s) {
        umap[i]++;
        }

        unordered_set<int>check;
        for(auto i:umap) {
            int freq = i.second;
            while(freq > 0 && check.find(freq) != check.end()) {
                freq--;
                cnt++;
            }
            check.insert(freq);
        }
        
        return cnt;
    }
};