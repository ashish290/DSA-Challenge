class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>umap;
        for(auto it : arr) {
            umap[it]++;
        }
        vector<int>temp;
        for(auto it : umap) {
            if(it.second) {
                temp.push_back(it.second);
            }
        }
        sort(begin(temp),end(temp));
        for(int i = 0; i < temp.size()-1; i++) {
            if(temp[i] == temp[i+1])
            return false;
        }
        return true;
    }
};