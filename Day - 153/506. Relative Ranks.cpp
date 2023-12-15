class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        unordered_map<int,int>umap;
        vector<string>result(n);
        for(int i = 0; i < n; i++) {
            umap[score[i]] = i;
        }
        sort(score.begin(),score.end(),greater<int>());
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                result[umap[score[i]]] = "Gold Medal";
            }
            else if(i == 1) {
                result[umap[score[i]]] = "Silver Medal";
            }
            else if(i == 2) {
                result[umap[score[i]]] = "Bronze Medal";
            }
            else {
                result[umap[score[i]]] = to_string(i+1);
            }
        }
        return result;
    }
}; 