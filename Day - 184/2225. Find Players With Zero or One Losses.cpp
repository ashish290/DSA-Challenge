class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int  n = matches.size();
        vector<int>not_lost;
        vector<int>lost;
        unordered_map<int,int>umap;
        for(int i = 0; i < n; i++) {
            int temp = matches[i][1];
            umap[temp]++;
        }
        for(int i = 0; i < n; i++) {
            int first_val = matches[i][0];
            int second_val = matches[i][1];
            if(umap.find(first_val) == umap.end()) {
                not_lost.push_back(first_val);
                umap[first_val] = 2;
            }
            if(umap[second_val] == 1) {
                lost.push_back(second_val);
            }
        }
        sort(not_lost.begin(),not_lost.end());
        sort(lost.begin(),lost.end());
        return {not_lost,lost};
    }
};