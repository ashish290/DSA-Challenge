class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>temp(n);
        unordered_map<int,int>umap;
        for(auto it : arr) {
            umap[it]++;
        }
        cout<<umap.size();
        for(auto it : umap) {
            temp.push_back(it.second);
        }
        sort(temp.begin(),temp.end());
        int cnt = 0;
        for(int i = 0; i < temp.size(); i++) {
            if(k >= temp[i]) {
                k -= temp[i];
                cnt++;
            }
            else {
                break;
            }
        }
        return temp.size()-cnt;
    }
};