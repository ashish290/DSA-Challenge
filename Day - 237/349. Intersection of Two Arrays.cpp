class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int n1 = nums1.size() , n2 = nums2.size();
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < n2; j++) {
                if(nums1[i] == nums2[j]) {
                    result.push_back(nums2[j]);
                    break;
                }
            }
        }
        set<int>st;
        for(auto it : result) {
            st.insert(it);
        }
        result.clear();
        for(auto it : st) {
            result.push_back(it);
        }
        return result;
    }
};