class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>umap;
        for(auto it : nums) {
            umap[it]++;
        }
        vector<int>temp;
        for(auto it : umap) {
            temp.push_back(it.second);
        }
        sort(temp.begin(),temp.end(),greater());
        int test = temp[0];
        int result = 0;
        for(int i = 0; i < temp.size(); i++) {
           if(test == temp[i]) {
               result += temp[i];
           }
           else {
               break;
           }
        }
        return result;
    }
};