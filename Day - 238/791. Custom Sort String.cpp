class Solution {
public:
    string customSortString(string order, string s) {
        string result = "";
        unordered_map<int,int>umap;
        for(auto it : s) {
            umap[it]++;
        }
        for(auto it : umap) {
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(auto it : order) {
            if(umap.find(it) != umap.end()) 
            result.append(umap[it],it);
            umap.erase(it);
        }
        for(auto it : umap) {
            result.append(it.second,it.first);
        }
        return result;
    }
};