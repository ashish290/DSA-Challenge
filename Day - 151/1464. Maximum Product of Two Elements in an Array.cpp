class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>maxheap;
        for(auto it : nums) {
            maxheap.push(it);
        }
        int first_idx = maxheap.top();
        maxheap.pop();
        int second_idx = maxheap.top();
        int result = (first_idx - 1) * (second_idx - 1);
        return result;
    }
};